#include<stdio.h>
#include<string.h>
void concatenate_string(char*,char*);
int main(){
char first[100],second[100];
printf("Enter the first string:\n");
scanf("%s",&first);
printf("Enter the string to concatenate:\n");
scanf("%s",&second);
concatenate_string(first,second);
printf("%s",first);

return 0;
}

void concatenate_string(char *str1,char *str2){
//printf("%d \n",str1);
while(*str1)
    str1++;
//printf("%d",str1);
while(*str2){
    *str1=*str2;
    str1++;
    str2++;
}
*str1='\0';

}
