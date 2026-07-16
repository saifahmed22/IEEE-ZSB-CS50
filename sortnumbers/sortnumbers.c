#include <stdio.h>
#include <cs50.h>
int main(void){
    int A,B,C;
scanf("%d%d%d",&A,&B,&C);
if (A<B && A<C){printf("%i\n%i\n%i\n",A,B,C);}
else if (A<C && C<B)
printf("%i\n%i\n%i\n",A, C,B);
else if (B<A && A<C)printf("%i\n%i\n%i\n",B,A,C);
else if (B<C && C<A ) printf("%i\n%i\n%i\n",B,C,A);
else if(C<A && A<B)
printf("%i\n%i\n%i\n",C,A,B);
else   printf("%i\n%i\n%i\n", C ,B,A);
printf("\n");
printf("%i\n%i\n%i\n",A,B,C);



}
