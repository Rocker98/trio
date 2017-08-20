#include <iostream>
#include <ctime>
#include <cstdlib>

int DIM=5;

void makeField(char* );
void drawField(char* );
void choose(char *);

int main(int argc, char** argv) {

char* point;
char fruitField[DIM][DIM];

point=&fruitField[0][0];
makeField(point);
point=&fruitField[0][0];
choose(point);
point=&fruitField[0][0];
drawField(point);
	
	
	
	return 0;
}


void makeField(char* fruitField)
{
	srand(time(0));
	
	for(int x=0;x<DIM;x++)
	{
		for(int y=0;y<DIM;y++)
		{
			int var= rand()%3;
			switch(var)
			{
				case 0: *fruitField='a';
				break;
				case 1: *fruitField='b';
				break;
				case 2: *fruitField='c';
				break;
				
			}
			fruitField++;
		}
		fruitField++;
	}

}

void choose(char* fruit)
{
		switch (*fruit)
	{
		case 'a': *fruit='A'; break;
		case 'b': *fruit='B'; break;
		case 'c': *fruit='C'; break;
	} 
}

void drawField(char* field)
{
	for(int x=0;x<DIM;x++)
	{
		for(int y=0;y<DIM;y++)
		{
			std::cout<<*field<<' ';
			field++;
		}
		std::cout<<std::endl;
		field++;
	}
}
