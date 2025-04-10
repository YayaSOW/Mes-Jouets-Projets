#include<stdio.h>
#define Max 4
int main(){
int var[]={10,100,200,300};
int *ptr[Max];
int i=0;
for (i=0;i<Max;i++){
//    printf("%d",var[i]);
//    ptr[i]=var[i];
    ptr[i]=&var[i];

}
for (i=0;i<Max;i++){
//    printf("Value of [%d] = %d \n",i,ptr[i]);
    printf("Value of [%d] = %d \n",i,*ptr[i]);
}

return 0;
}

