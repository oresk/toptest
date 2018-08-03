// toptal tech interview 03.08.2018

#include <stdio.h>
#include "othermsg.h"

int main( int argc, const char* argv[] )
{
    printf( "\nHello World\n\n" );

    PrintOtherMessage(42);

    for (int i = 0; i < 10; i++){
      printf("test msg variable i currently has a value of %d\n", i);
    }
    printf("\n");

    return 0;
}
