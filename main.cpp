#include "mbed.h"
#include <cstdio>

InterruptIn butt(PC_13);

void buttn_fall(){
printf("button pressed!!\r\n");
}

//main() runs in its own thread in the OS
int main()
{
    printf("This is mbed os %d \r\n" , MBED_VERSION);
    butt.fall(&buttn_fall);

while (true) {

    }
}

