#include <amtest.h>

#define CLINT_START       0x2000000
#define CLINT_MTIMECMP    (CLINT_START + 0x4000)
#define CLINT_MTIME       (CLINT_START + 0xBFF8)
Context *simple_trap(Event ev, Context *ctx) {
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      *((uint64_t*) CLINT_MTIMECMP) += 1000;
      putch('t'); break;
    case EVENT_IRQ_IODEV:
      putch('d'); break;
    case EVENT_YIELD:
      putch('y'); break;
    default:
      break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");
  io_read(AM_INPUT_CONFIG); // external interrupt
  iset(1);  // interrupt enable
  printf("mtimecmp: %d\n", *((uint64_t*) CLINT_MTIMECMP));
  // *((uint64_t*) CLINT_MTIMECMP) += 5000;
  // printf("mtimecmp: %d\n", *((uint64_t*) CLINT_MTIMECMP));
  printf("mtime: %d\n", *((uint64_t*) CLINT_MTIME));
  for(int i=0; i<5; i++) {
    for(int j=0; j<1000; j++);
    yield();
  }
}
