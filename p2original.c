#include <stdio.h>
 int input_side()
 {
   int x;
   printf ("enter the side of the triangle\n");
   scanf ("%d",&x);
   return x;
 }
 int check_scalene(int a, int b, int c)
 {
   if(a!=b && a!=c && b!=c)
   return 1;
   else
   return -1;
 }
 void output( int isscalene)
 {
   if(isscalene == 1)
   {
     printf("the triangle is scalene\n");
   }
   else 
   {
     printf("the triangle is not scalene\n");
   }
   
 }
   
   int main()
   {
     int a,b,c,res;
     a=input_side();
     b =input_side();
     c=input_side();
     res = check_scalene(a, b, c);
     output(res);
     return 0;
   }