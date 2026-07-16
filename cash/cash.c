#include <stdio.h>
#include <cs50.h>
int main(void){
   int change_owed;
  do {change_owed=get_int("change owed");}
  while (change_owed<1);
  int counter=0;
while(change_owed>0)
 {if (change_owed>=25)
{change_owed = change_owed-25;
counter++;}
else if (change_owed>=10)
{change_owed=change_owed-10;
counter++;}
else if (change_owed>=5){change_owed=change_owed-5;
counter++;}
else if (change_owed>=1){change_owed=change_owed-1;
counter++;}}
printf("%i\n",counter);

}
