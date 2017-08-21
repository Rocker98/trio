#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

int DIM=5;
char* choosenFruit;
int chek=0;

void makeField(char* );
void drawField(char* );
void chooseFirst(char *);
char* move(char *);
void invert_a_into_A(char *);
void invert_A_into_a(char *);

int main(int argc, char** argv) {

char* point;
char fruitField[DIM][DIM];

point=&fruitField[0][0];
choosenFruit=&fruitField[0][0];
makeField(point);
point=&fruitField[0][0];
chooseFirst(point);

point=&fruitField[0][0];
drawField(point);
do
{
move(choosenFruit);

point=&fruitField[0][0];
drawField(point);
std::cout<<std::endl<<chek;
}while(true);
	
	
	
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

void chooseFirst(char* fruit)
{
	invert_a_into_A(fruit);
}

char* move(char* fruit)
{
	
	int key=getch();
	switch(key)
	{
		case 72:
		{
			if(!(chek<6))
			{
				invert_A_into_a(fruit);
				fruit-=6;
				chek-=6;
				choosenFruit=fruit;
				invert_a_into_A(fruit);
			}
			
		}break;
        case 80:
		{
			if(!(chek>22))
			{
				invert_A_into_a(fruit);
				fruit+=6; 
				chek+=6;
				choosenFruit=fruit;
				invert_a_into_A(fruit);
			}
			
		}break;
        case 75:
		{
			if(!(chek==0||chek==6||chek==12||chek==18||chek==24))
			{
				invert_A_into_a(fruit);
				fruit-=1;
				chek-=1;
				choosenFruit=fruit;
				invert_a_into_A(fruit);
			}
		}break;
        case 77:
		{
			if(!(chek>27||chek==4||chek==10||chek==16||chek==22||chek==28))
			{
				invert_A_into_a(fruit);
				fruit+=1;
				chek+=1;
				choosenFruit=fruit;
				invert_a_into_A(fruit);
			}
		}break;
	}
	fflush(stdin);
	system("cls");
	return fruit;
}

void invert_a_into_A(char *item)
{
	switch (*item)
			{
				case 'a': *item='A'; break;
				case 'b': *item='B'; break;
				case 'c': *item='C'; break;
			}
}

void invert_A_into_a(char *item)
{
	switch (*item)
			{
				case 'A': *item='a'; break;
				case 'B': *item='b'; break;
				case 'C': *item='c'; break;
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
