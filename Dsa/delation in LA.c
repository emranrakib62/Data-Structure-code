#include<stdio.h>
void main()
{
    int a[100],i,j,n,k;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the delete position:\n");
    scanf("%d",&k);
    for(j=k;j<n;j++)
        a[j]=a[j+1];
    n--;
    printf("After deletion:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

