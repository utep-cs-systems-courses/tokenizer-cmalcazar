#include <stdlib.h>
#include <stdio.h>

/*simple ui that prints what user inputs*/
int main()
{

  char userIn[100];
  
  while(1) {
    putchar('$');
    fgets(userIn, 100, stdin);
    printf("%s\n", userIn);
  }

  space_char("s");
  space_char(" ");

  non_space_char("s");
  non_space_char(" ");

  return 0;
  
}
