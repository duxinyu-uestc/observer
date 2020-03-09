
#include "Subject.h"

static void subject_addobserver(subjectPtr sp, observerptr op)   /*���ʱ�����¹۲��߽ṹ���λ��*/ 
{
	list_add_tail(&op->node, &sp->list); 
	op->p=op->node.prev->p+1;
	op->update(op->p);
	
	
}

static void subject_removeobserver(subjectptr sp, observerptr op)
{
	observer q=op->node.next;/*����ʱ�� ���º������й۲��ߵ�λ����ɾ���ڵ�*/ 
	while(q!=null)
	{
		q->p--;
		q->update(q->p);
	}
	
	
	list_del(&op->node);
}



void subject_init(subjectptr sp)
{
	sp->add = subject_addobserver;
	sp->remove = subject_removeobserver;

	sp->val = 0;
	INIT_LIST_HEAD(&sp->list);
}

