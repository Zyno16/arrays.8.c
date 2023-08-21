#include <stdio.h>
#include <stdlib.h>

int main()
{int i,x,n,estpremier;

    printf("enter n number");
    scanf("%d",&n);
    int t[n];
    int count;
    count=0;
   x=2;
   do{


   estpremier=0;
   for(i=2;i<=x/2;i++){
    if(x%i==0){
        estpremier=1;
        break;
    }
   }
    if(estpremier==0){

        t[count]=x;
    count++;}
    x++;
   }while(count<n);
   printf("number is %d",n);
   for(i=0;i<n;i++)
    printf("%d\n",t[i]);
    return 0;
}
