#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int DataType;

typedef struct List
{
	DataType data;
	struct List *next;
}Node, *pNode, List, *pList;

void InitLinkList(pList *pplist);
pNode BuyNode(DataType d);
void DestroyLinkList(pList* pplist);
void PushBack(pList* pplist, DataType d);
void PopBack(pList* pplist);
void PushFront(pList* pplist, DataType d);
void PopFront(pList* pplist);
pNode Find(pList plist, DataType d);

//��ָ��λ��֮ǰ����һ��ֵ 
void Insert(pList* pplist, pNode pos, DataType d);
//ָ��λ��ɾ�� 
void Erase(pList* pplist, pNode pos);
void Remove(pList* pplist, DataType d);
void RemoveAll(pList* pplist);
void EraseNotTailNode(pList* pplist, pNode pos);

void PrintLinkList(pList plist);
int GetListLength(pList plist);
//���������� 


//1. �����ӡ�������� 
void PrintTailToHead(List plist);

void Test();