#ifndef LANJIAN_LIS_
#define LANJIAN_LIS_


#include<stdlib.h>

struct list_head{

int p;
struct list_head *next;
struct list_head *prev;

};

static inline void list_add_tail(struct list_head *neww, struct list_head *head){
	head->prev->next=neww;
	neww->prev=head->prev;
	head->prev=neww;
	neww->next=head;
}
static inline void list_del(struct list_head *entry){


entry->prev->next=entry->next;
entry->next->prev=entry->prev;

	
}

static inline void INIT_LIST_HEAD(struct list_head *list)
{
    list->next = list;
    list->prev = list;
}










#endif /* LANJIAN_LIS_ */
