#include <stdio.h>
#include "inversor.h"

void inversor( int num){
    if(num == 0)
        return 0;


    printf("%d", num % 10);
    num = num/10;
    return inversor(num);


}
