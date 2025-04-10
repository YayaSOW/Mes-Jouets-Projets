#include<stdio.h>
#include<string.h>
void concatenate_string(char[],char[]);
int main(){
char first[100],second[100];
printf("Enter the first string:\n");
//scanf("%s",&first);
gets(first);
printf("Enter the string to concatenate:\n");
//scanf("%s",&second);
gets(second);
concatenate_string(first,second);
printf("%s",first);

return 0;
}

void concatenate_string(char s1[],char s2[]){
    int i,j;
i=strlen(s1);
//int max=taille+strlen(str2);
//printf("%d",max);
for (j=0;s2[j]!='\0';i++,j++){
    s1[i]=s2[j];
}
s1[i]='\0';
}

