#ifndef SRC_OBSERVER_H_
#define SRC_OBSERVER_H_

#include <stdlib.h>
#include "list.h"

typedef void(*update_fun_ptr)(int val);/*定义一个函数类型方便传递*/ 

typedef struct
{
	update_fun_ptr update;      /*定义通用观察者结构体 包含更新函数 链表节点 以及位置p  调用此结构体可以方便的声明不同的观察者*/ 
	struct list_head node;
	int p;
}observer, *observerptr;

typedef struct                       /*定义一种观察者  本题目只有一种*/ 
{
	observer obs;

}observers, *observersptr;



void update(int val);

void observer_init(observersptr op, update_fun_ptr fptr);

#endif /* SRC_OBSERVER_H_ */

