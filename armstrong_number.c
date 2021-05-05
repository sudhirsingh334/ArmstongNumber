#include <stdio.h>
int main(){
    int n ,temp,digit, sum=0;
      printf("Entet the  number :");
      scanf("%d",&n);
        
      temp=n;
      while(temp !=0){
          digit=temp % 10 ;
           sum = sum + digit * digit * digit ;
          temp =temp / 10;
      }
      if(n==sum){
          printf("%d is a armstrong number",n);
          
      }
        else{
            printf("%d is not a armstong number",n);
      
        }
}

