#include<stdio.h>

int main()

{

   float fn1,fn2,add,sub,mul,divi;
   int n;
    
   printf("enter the num");
    
   scanf("%f",&fn1);
    
   printf("enter the num");
    
   scanf("%f",&fn2);
    
   printf("enter the num(1,2,3,4):");
    
   scanf("%d",&n);
    
   switch(n)
    
   {
    
     case 1:
    
     add=fn1+fn2;
    
     printf("The result is %f",add);
    
     break;
    
     case 2:
    
     sub=fn1-fn2;
    
     printf("The result is %f",sub);
    
     break;
    
     case 3:
    
     mul=fn1*fn2;
    
     printf("the result is %f",mul);
    
     break;
    
     case 4:
    
     if(fn2==0)
    
     {
        
       printf("It is invalid");
    
     }
    
     else
    
     {
        
       divi=fn1/fn2;
        
       printf("the result is %f",divi);
    
     }
    
     break;
    
     default:
    
     printf("You have selected the Invalid case");
    
     }
    
   return 0;

}