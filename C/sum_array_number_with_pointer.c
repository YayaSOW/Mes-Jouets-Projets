#include<stdio.h>
int main(){
int n,i,*ptr,sum=0;
printf("Enter the numbers of integer :\n");
scanf("%d",&n);
printf("Enter elements of array :\n");
for(i=0;i<n;++i){
//    printf("%d \n",i);
    scanf("%d\n",ptr+i);
    sum+=*(ptr+i);
}
printf("%d\n",sum);
printf("Elements of array are:\n");
for(i=0;i<n;i++){
    printf("%d",ptr[i]);
}

return 0;
}
