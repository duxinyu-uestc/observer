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
		{                /*�����ʱ ����һ����ַ���µĽṹ��ָ�벢������������*/ 
		sb.add(&sb, &ob.obs);      /*���β*/ 
		
	    }
		else if (c=2)
		{
			
		sb.remove(&sb, &ob.obs);       /*ȥ��ͷ */ 
			
		}
		
		
	}
	

    return 0;
}
