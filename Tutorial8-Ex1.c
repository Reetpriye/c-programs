// Gift cash reward on passing exam subjects

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sc,ma;
    printf("Are you pass in Maths? Write 1 for YES and 0 for NO\n");
    scanf("%d",&ma);
    printf("Are you pass in Science? Write 1 for YES and 0 for NO\n");
    scanf("%d",&sc);
  if (sc == 1 && ma == 1)
  {
      printf("Your account will be credited with Rs.450.\n");
  }
  else if (sc == 1)
  {
      printf("Your account will be credited with Rs.150.\n");
  }
  
   else if (ma == 1)
  {
      printf("Your account will be credited with Rs.150.\n");
  }
  else
  {
      printf("Sorry! You are not entitled for any kind of prizes.\n");
  }
  
    return 0;
}
