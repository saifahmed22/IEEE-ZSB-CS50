#include <stdio.h>
#include <cs50.h>
int main(void){
    int count;
   do {count=get_int(" the number");}
while (count<1 || count > 8);
for (int i=0 ; i<count ;i=i+1){
    for(int s=0 ; s<count-i-1;s=s+1){
        printf(" ");}
for ( int k=0;k<i+1 ;k=k+1){



printf("#");}
printf("\n");}
}
