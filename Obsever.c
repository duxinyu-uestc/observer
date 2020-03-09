
#include "Observer.h"


void update(int val)
{
	printf("location=%d/n", val);/*更新函数输出位置      用户不好区分*/ 
}



void observer_init(observerptr op, update_fun_ptr fptr)
{
	op->update = fptr;
	op->node.next = NULL;
	op->node.prev = NULL;
	int p=-1; 
}

