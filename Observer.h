#ifndef SRC_OBSERVER_H_
#define SRC_OBSERVER_H_

#include <stdlib.h>
#include "list.h"

typedef void(*update_fun_ptr)(int val);/*����һ���������ͷ��㴫��*/ 

typedef struct
{
	update_fun_ptr update;      /*����ͨ�ù۲��߽ṹ�� �������º��� ����ڵ� �Լ�λ��p  ���ô˽ṹ����Է����������ͬ�Ĺ۲���*/ 
	struct list_head node;
	int p;
}observer, *observerptr;

typedef struct                       /*����һ�ֹ۲���  ����Ŀֻ��һ��*/ 
{
	observer obs;

}observers, *observersptr;



void update(int val);

void observer_init(observersptr op, update_fun_ptr fptr);

#endif /* SRC_OBSERVER_H_ */

