#ifndef _RTC_THREAD_H_
#define _RTC_THREAD_H_

#include <rtthread.h>
#include <sys.h>

extern rt_uint8_t rtc_stack[ 1024 ];	//�߳�ջ
extern struct rt_thread rtc_thread; 	//�߳̿��ƿ�
extern void rtc_thread_entry(void* parameter);

#endif