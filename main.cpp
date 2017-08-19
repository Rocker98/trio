#include <iostream>
#include <ctime>
#include <cstdlib>

void drawField();

int main(int argc, char** argv) {
	
drawField();
	
	
	
	
	
	return 0;
}


void drawField()
{
//	srand(time(0));
	char field[10][10];
	for(int x=0;x<10;x++)
	{
		for(int y=0;y<10;y++)
		{
			int var= rand()%3;
			switch(var)
			{
				case 0: field[x][y]='a';
				break;
				case 1: field[x][y]='b';
				break;
				case 2: field[x][y]='c';
				break;
				
			}
			std::cout<<field[x][y]<<' ';
		}
		std::cout<<std::endl;
	}
}
