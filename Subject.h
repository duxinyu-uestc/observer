#ifndef SRC_SUBJECT_H_
#define SRC_SUBJECT_H_

#include "List.h"
#include "Observer.h"

typedef struct __subject subject;
typedef struct __subject* subjectptr;
struct __subject
{
	int val;                                     /*���屻�۲��߽ṹ��  ����һ���������ڴ����۲��߶����Լ���ӳ��Ӻ���*/ 
	struct list_head list;
	void (*add)(subjectptr sp, observerptr op);
	void (*remove)(subjectptr sp, observerptr op);

};

void subject_init(subjectptr sp);

#endif /* SRC_SUBJECT_H_ */
