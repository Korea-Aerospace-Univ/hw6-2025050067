#include <stdio.h>

int main()
{
     int n; int *p=nullptr; int arr1[30];int sum[30];
     int arr2[30];int *q=nullptr;int *r=nullptr;
     scanf("%d",&n);
     p=arr1;
     q=arr2;
     r=sum;
     for(int i=0;i<n;i++){
         scanf("%d",p+i);
     }
     for(int i=0;i<n;i++){
         scanf("%d",q+i);
     }
     q=arr2+n-1;
     for(int i=0;i<n;i++){
         *r=*p+*q;
         p++;
         q--;
         r++;
         
     }
     for(r=sum;r<sum+n;r++) printf("%d ",*r);
    return 0;
}
