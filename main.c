#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
while(1){
	srand(time(NULL));
	int randNum=1+ rand() % 100;
	printf("welcome to the number predictor\n");


	while(1){
		printf("give me number \n");
		int x;
		scanf("%d",&x);

		if(x== randNum)	{
			printf("You won\n");
			break;
		}
		else if(x<randNum){
			printf("too low ");
		}

        else if(x>randNum){
			printf("too high ");
		}

    }

	printf("To continue game press \'y\' Otherwise you're gonna quit \n");
   char s;
     scanf(" %c",&s);
     if(s!='y'){
	   break;
               }


}
	return 0;
}
