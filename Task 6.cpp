//preprocessing part.
#include <stdio.h>
#include <stdlib.h>
//main function
int main(){
	char input;
	int i = 0;
    int j = 0;
    //open file
	FILE *fp;
	fp= fopen("Task 6.txt", "r");
	printf("File opended successfully\n");
    printf("String input from file: ");
    
    //first loop to read file
    while(1){
    input = fgetc(fp);
    if(input==EOF)
        break;
   	else
        printf("%c", input);
     }
     
    printf("\nReserved string: ");
    fseek(fp,0,SEEK_END);
    i = ftell(fp);
    
    //secand loop to reserved
    while(j < i){
    j++;
    fseek(fp,-j,SEEK_END);
    printf("%c",fgetc(fp));
    }
    printf("\n\t The Reserved string is added to the file successfully \n");
	system("pause");
	return 0;
}
