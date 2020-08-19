#include <stdio.h>
#include <string.h>
#include <conio.h>


void reverse(char s[]){
	char *token;
	char word[10][30];
	int count=0;
	
	token=strtok(s,"!@#$%^&*() \t"); // split stirng dua tren seperator 
	while(token!=NULL){ // loop while de split va lay token den khi token = null ( het string ) 
		strcpy(word[count++],token); // copy char trong token sang mang word
		token=strtok(NULL, "!@#$%^&*() \t"); // tiep tuc split string 
	}
	strcpy(s,""); // copy " " vao string s
	for(int i=--count; i>=0; i--){
		strcat(s,word[i]); // noi string s vao array   
		strcat(s," ");
	}
}
int main(){
	char s[100];
	do{
		printf("Please enter string:");
		gets(s);
		printf("\nThe old string:");
		printf("%s",s);
		printf("\nThe reversed string:");
		reverse(s);
		printf("%s",s);
		printf("\nPress enter to continue another reverse, ESC to exit");
	}while(true);
}
