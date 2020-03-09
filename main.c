#include <stdio.h>
#include <stdlib.h>
#include "Observer.h"
#include "Subject.h"


int main()
{
	subject sb;
	observers ob;

	subject_init(&sb);
	observer_init(&ob.obs, update);
	int c;
	while(scanf("%d",&c)!=0){
		ob=(observers*)malloc(sizeof observers);
		if(c=1)   
		{                /*当入队时 分配一个地址给新的结构体指针并将他加入链表*/ 
		sb.add(&sb, &ob.obs);      /*添队尾*/ 
		
	    }
		else if (c=2)
		{
			
		sb.remove(&sb, &ob.obs);       /*去队头 */ 
			
		}
		
		
	}
	

    return 0;
}
