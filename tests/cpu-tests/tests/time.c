#include "trap.h"

int main() {
    while(1) {
        int current_time = io_read(AM_TIMER_UPTIME).us;
        printf("current time %d\n", current_time);
    }

    return 0;
}