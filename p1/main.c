#include <stdio.h>

int main()
{
     char arr[10]; 
     char *p=nullptr; 
     char *q=nullptr; 
     char maxChar='\0';
     int maxCount=0; 
     int count=0;
    for(p=arr;p<arr+10;p++){
        scanf("%c",p);
    }
    for(p=arr;p<arr+10;p++){
        for(q=p;q<arr+10;q++){
            
            if(*q==*p){
                count++;
                
            }
            
        }
        if(count>maxCount) {
            maxCount=count;
            maxChar=*p;
        }
        count=0;
    }
    printf("%c %d",maxChar,maxCount);
    return 0;
}
