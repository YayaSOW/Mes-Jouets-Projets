#include<stdio.h>
#define Max 4
int main(){
char *name[]={"Google","Amazon","Toshiba","Sony"};
int i=0;
for (i=0;i<Max;i++){
    printf("Value of Name [%d] = %s \n",i,name[i]);
}
for (i=0;i<Max;i++){
    printf("Value of each firstCharactere [%d] = %c \n",i,*name[i]);
}

return 0;
}
