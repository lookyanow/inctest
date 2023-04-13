#include "funcs.h"    /* Always include the header file that declares something
                     * in the C file that defines it. This makes sure that the
                     * declaration and definition are always in-sync.  Put this
                     * header first in foo.c to ensure the header is self-contained.
                     */
#include <sys/types.h>
#include <unistd.h>
/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
int getmypid(void)
{
   pid_t pid = getpid();
   return pid;
}