#include <stdio.h>
#include "somatorio.h"

int somatorio(int num){

    if(num == 1)
        return 1;
    else
        return num + somatorio(num-1);

}
