// Arithmetic Operations & BitwiseOperator
// Check Operator Precedence
// Author: REET

/*
Bitwise Operator
Exclusive OR
a xor b(a^b)
0^0 = 0
0^1 = 1
1^0 = 1
1^1 = 0
*/

/*
~ is the binary one's complement operator.
<< is the binary left shift operator.
>> is the binary right shift operator.
*/

#include <stdio.h>

  int main() {

  int a = 0, b = 34;

  printf("a | b = %d\n", a || b);
  printf("a & b = %d\n", a && b);
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  

  return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
a | b = 1
a & b = 0
a + b = 34
a - b = -34
*/