#include <sys/types.h>
#include <sys/errno.h>
#include <sys/stat.h>


#undef errno
extern int errno;

void _exit(int error)
{
    while (1)
    {
        asm("wfi\r\n");
    }
}

caddr_t _sbrk(int incr)
{
    return 0;
    // extern char _end; /* Defined by the linker */
    // static char *heap_end;
    // char *prev_heap_end;

    // if (heap_end == 0)
    // {
    //     heap_end = &_end;
    // }
    // prev_heap_end = heap_end;
    // if (heap_end + incr > stack_ptr)
    // {
    //     // write (1, "Heap and stack collision\n", 25);
    //     abort();
    // }

    // heap_end += incr;
    // return (caddr_t)prev_heap_end;
}

int _stat(char *file, struct stat *st) {
  st->st_mode = S_IFCHR;
  return 0;
}

int _write(int file, char *ptr, int len) {
  return len;
}

int _read(int file, char *ptr, int len) {
  return 0;
}

int _open(const char *name, int flags, int mode) {
  return -1;
}

int _close(int file) {
  return -1;
}

int _isatty(int file) {
  return 1;
}

int _fstat(int file, struct stat *st) {
  st->st_mode = S_IFCHR;
  return 0;
}

int _lseek(int file, int ptr, int dir) {
  return 0;
}