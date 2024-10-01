#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    long long int t,b,random;
    printf("Enter the range you want random numbers between : \n");
    scanf("%lld  %lld",&b,&t);

    printf("You entered bottom limit = %lld and top limit = %lld\n", b, t);

    if (t > b+1){
        srand(time(0));
        random = rand()%(t - b - 1) + (b + 1);
       
          printf("Your random number between %lld and %lld is : %lld \n",b,t,random);                 
    
    }
    else {
       
           printf("The range is not valid. \n"); 
    }
    return 0;
}