#include "LifeClass.h"


LifeClass::LifeClass(void)
{
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			Board[i][j].ActOfGod=0;
			Board[i][j].AliveOrDead=0;
		}
	}
	DeathCount=0;
}

LifeClass::LifeClass(char * Name)
{
	char ch;
	int val=0;
	ifstream fin;
	fin.open(Name);
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH+1;j++){//add one to width to account for the newline character
			fin.get(ch);
			if(fin.eof()) //on the last line, we read one to many characters, so break (not the greatest solution)
				break;
			val = (int)ch-48;
			if(val == 0 || val == 1){
				Board[i][j].AliveOrDead=val;
				Board[i][j].ActOfGod=0;
			}
		}
	}
	fin.close();
	DeathCount=0;
}

int LifeClass::CountNeighbors(int x,int y){
	int NeighborCount=0;

	if(x-1>=0 && y-1>=0 && Board[x-1][y-1].AliveOrDead==1)
		NeighborCount++;
	if(x-1>=0 && Board[x-1][y].AliveOrDead==1)
		NeighborCount++;
	if(x-1>=0 && y+1 < WIDTH && Board[x-1][y+1].AliveOrDead==1)
		NeighborCount++;
	if(y-1 >= 0 && Board[x][y-1].AliveOrDead==1)
		NeighborCount++;
	if(y+1 < WIDTH && Board[x][y+1].AliveOrDead==1)
		NeighborCount++;
	if(y-1 >= 0 && x+1 < HEIGHT && Board[x+1][y-1].AliveOrDead==1)
		NeighborCount++;
	if(x+1 < HEIGHT && Board[x+1][y].AliveOrDead==1)
		NeighborCount++;
	if(x+1 < HEIGHT && y+1 < WIDTH && Board[x+1][y+1].AliveOrDead==1)
		NeighborCount++;
	return NeighborCount;
}

bool LifeClass::YourGonnaDie(int x,int y){
	int NeighborCount = CountNeighbors(x,y);
	if(NeighborCount<2 || NeighborCount>3)
		return 1;
	else
		return 0;
}

void LifeClass::PrintBoard(){
	ClearScreen();
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			cout<<Board[i][j].AliveOrDead;
		}
		cout<<endl;
	}
}

void LifeClass::RandomlyPopulate(){
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			Board[i][j].AliveOrDead=rand()%2;
		}
	}
}

void LifeClass::ClearScreen(){
	system("cls");
}

LifeClass::~LifeClass(void)
{

}
