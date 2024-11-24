#include<stdio.h>
int main(){
int i ,n,k,a[100];
printf("Enter the number of element:");
scanf("%d",&n);
printf("Enter the element:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}
printf("Insert the array position:");
scanf("%d",&k);
for(i=n;i>=k;i--)
    a[i+1]=a[i];
printf("Enter the insert value:");
scanf("%d",&a[k]);
n++;
printf("After Insertion:");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}



}
