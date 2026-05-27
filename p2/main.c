#include <stdio.h>

int main()
{
     int n; int *p=nullptr; int arr1[20];int sum[20];
     int arr2[20];int *q=nullptr;int *r=nullptr;
     scanf("%d",&n);
     p=arr1;
     q=arr2;
     ;
     for( p=arr1;p<arr1+n;p++){
         scanf("%d",p);
     }
     for(p=arr2;p<arr2+n;p++){
         scanf("%d",p);
     }
     ;
     for(p=arr1, q=arr2+n-1, r=sum;p<arr1+n;p++,q--,r++){
         *r=*p+*q;
        
         
     }
     for(r=sum;r<sum+n;r++) printf(" %d",*r);
    return 0;
}
