#ifndef _OUR_MQUEUE_H
#define _OUR_MQUEUE_H


#include <linux/mqueue.h>
#include <sys/types.h>
#include <fcntl.h>
#include <time.h>

typedef int mqd_t;

#if defined(__cplusplus)
extern "C" {
#endif

int mq_close(mqd_t);
int mq_getattr(mqd_t, struct mq_attr*);
int mq_notify(mqd_t, const struct sigevent*);
mqd_t mq_open(const char*, int, ...);
ssize_t mq_receive(mqd_t, char*, size_t, unsigned int*);
int mq_send(mqd_t, const char*, size_t, unsigned int);
int mq_setattr(mqd_t, const struct mq_attr*, struct mq_attr*);
ssize_t mq_timedreceive(mqd_t mqdes, char* msg_ptr, size_t msg_len, unsigned int* msg_prio, const struct timespec* abs_timeout);
int mq_timedsend(mqd_t, const char*, size_t, unsigned int, const struct timespec*);
int mq_unlink(const char*);

#if defined(__cplusplus)
}
#endif

#endif // _OUR_MQUEUE_H
