#include <iostream>
#include <fstream>


using namespace std;

struct Cell{
	int AliveOrDead;
	int ActOfGod;		//Holds a -1 , 0 , 1
};

#define WIDTH 78
#define HEIGHT 24

class LifeClass
{
private:
	Cell Board[HEIGHT][WIDTH];
	void ClearScreen();
	int CountNeighbors(int,int);
	bool YourGonnaDie(int,int);
	bool YourGonnaGetBorned(int,int);
	int DeathCount;
public:
	LifeClass(void);
	LifeClass(char *);
	void PrintBoard();
	void RandomlyPopulate();
	~LifeClass(void);
};

