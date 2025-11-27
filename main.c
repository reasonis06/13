#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int			stNumber;
	char		stName[20];
	float			stScore;
};

int main(int argc, char *argv[])
{
  struct student std = {10, "Juyeop", 4.3};
  struct student *stdPtr;
	
	stdPtr = &std;
	
	stdPtr->stNumber = 2510141;
	strcpy(stdPtr->stName, "SeongEun");
	stdPtr->stScore = 4.0;
	
	printf("number: %d, name: %s, score: %f\n",
					stdPtr->stNumber, stdPtr->stName, stdPtr->stScore);
  
  system("PAUSE");	
  return 0;
}
