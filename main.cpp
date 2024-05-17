#include "mbed.h"
#include <cstdio>

InterruptIn butt(PC_13);

volatile int myflag = 0;

void buttn_fall(){
myflag = 1;
}

//main() runs in its own thread in the OS
int main()
{
    printf("This is mbed os %d \r\n" , MBED_VERSION);
    butt.fall(&buttn_fall);
while (true) {
if (myflag == 1){
    printf("button pressed!!\r\n");
    myflag = 0;
}
    
}
}
