#ifndef SRC_SUBJECT_H_
#define SRC_SUBJECT_H_

#include "List.h"
#include "Observer.h"

typedef struct __subject subject;
typedef struct __subject* subjectptr;
struct __subject
{
	int val;                                     /*定义被观察者结构体  包含一个链表用于存贮观察者队列以及入队出队函数*/ 
	struct list_head list;
	void (*add)(subjectptr sp, observerptr op);
	void (*remove)(subjectptr sp, observerptr op);

};

void subject_init(subjectptr sp);

#endif /* SRC_SUBJECT_H_ */
