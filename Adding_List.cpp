#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
typedef struct 
{
int a;
struct *next;
}Node_List;
*/

struct Node_List 
{
int a;
Node_List *next;
};

Node_List *Head = NULL;
Node_List *End = NULL;

void Adding_List(int test_a)
{
    Node_List* temp_list = (Node_List*)(malloc(sizeof(Node_List)));
    temp_list->a = test_a;
    temp_list->next = NULL;
    //如果头节点为空,temp_list就是头节点
    if(NULL == Head)
    {
        Head = temp_list;
    }
    else
    {
        End->next = temp_list;
    }
    End = temp_list;
}

int main()
{
    Adding_List(3);
    return 0;
}
