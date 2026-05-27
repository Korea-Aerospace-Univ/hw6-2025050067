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
         
     for(int i=0;i<n;i++){
         r[i]=p[i]+q[n-i-1];
     }
     for(r=sum;r<sum+n;r++) printf("%d ",*r);
    return 0;
}
