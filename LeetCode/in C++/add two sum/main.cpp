#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

};



void swapr(int *a, int *b)
{

    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void insertionSort(ListNode* head)
{

    int mins = head->val;
    ListNode *t =  head;
    ListNode *v = head;

    do{
        v = t->next;

        while( v = v->next  )
        if(mins > v->val )
        swapr(&mins,&(v->val));
        swapr(&t->val,&mins);

        t = t->next;
        mins = t->val;

    }while(t->next);

}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{

    ListNode * t = list1;

    while(t->next)
    t = t->next;
    t->next = list2;

    insertionSort(list1);


    return list1;

}





void display(ListNode *a)
{
    do
    {
        cout<<a->val<<" ";
    }
    while(a=a->next);
}

int main()
{
    ListNode *a,*b,*c,*d;
    ListNode *a1,*b1,*c1,*d1;
    a = new ListNode();
    b = new ListNode();
    c = new ListNode();
    d = new ListNode();
    a1 = new ListNode();
    b1 = new ListNode();
    d1 = new ListNode();
    c1 = new ListNode();
    a->val = 10;
    b->val = 1;
    c->val = 0;
    d->val = 3;
    a1->val = 14;
    b1->val = 15;
    c1->val = -17;
    d1->val = 188;
    a->next =b ;
    b->next =c ;
    c->next = d ;
    d->next =0;
    a1->next =b1;
    b1->next= c1 ;
    c1->next = d1 ;
    d1->next = 0;

    mergeTwoLists(a,a1);
    display(a);



    return 0;
}
