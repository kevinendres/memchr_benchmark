#ifndef MEMCHR_H_
# define MEMCHR_H_

typedef void (*thread_callback_t) (void *arg);

void *memchr_avx2_warmup(void const *s, int c_in, size_t n, size_t warmup_length,  thread_callback_t fun,
                  void* arg);

#endif
