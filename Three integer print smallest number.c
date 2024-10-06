#include <stdio.h>

int main() {
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a<b)&&(a<c))
   {
       printf("a is smallest");
       
   }
     else if((b<a)&&(b<c))
   {
      printf("b is smallest");
}
else 
printf("c is smallest");
    return 0;
}
