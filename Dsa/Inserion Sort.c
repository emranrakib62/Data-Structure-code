#include<stdio.h>
int main(){
int a[]={-8,4,5,6,1,2,3};
int i,value,hole;
for(i=1;i<7;i++){
    value=a[i];
    hole=i;
    while(hole>0 && a[hole-1]>value){
        a[hole]=a[hole-1];
        hole--;
    }
    a[hole]=value;
}
printf("Sorted Array:\n");
for(i=0;i<7;i++){
    printf("%d\n",a[i]);
}
printf("\n\n");
return 0;
}
