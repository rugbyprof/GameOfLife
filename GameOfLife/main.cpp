#include <iostream>
#include "LifeClass.h"

using namespace std;

void main(){
	LifeClass Game("world_input.dat");
	Game.PrintBoard();
	system("pause>0");
}