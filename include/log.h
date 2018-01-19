#ifndef _LOG_H_
#define _LOG_H_
#include "buffer.h"
ssize_t write_all(int fd, const void* buf, size_t count);

/* Close fd and _try_ to get a /dev/null for it instead.
 * Returns 0 on success and -1 on failure (fd gets closed in all cases)
 */
int openDevNull(int fd);


int log_error_open();
int log_error_close();
int log_error_write(buffer *error_buf, unsigned int line, const char *fmt, ...);

#endif
