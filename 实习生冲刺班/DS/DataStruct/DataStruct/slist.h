#ifndef _SLIST_H_
#define _SLIST_H_

#include"Common.h"
typedef struct SListNode
{
	ElemType data;
	struct SListNode *next;
}SListNode;

//����ͷ���ĵ�����
typedef SListNode* SList;


void SListInit();
void SListPushBack()
void SListPushFront();
/////////////////////////////////////////////////////////////////////


#endif /* _SLIST_H_ */