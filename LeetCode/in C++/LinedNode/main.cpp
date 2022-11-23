#include <iostream>

using namespace std;

struct ListNode{
      int val;
      ListNode *next;

 };
int getsize(ListNode *head){

  ListNode * a=head;
        int i=0;

        while(a=a->next)
            i++;

        return i;

    }

 ListNode* removeNthFromEnd(ListNode* head, int n) {

                ListNode * v = head->next;
                ListNode * t = head;
                int sz = getsize(head) - n;
                int j = 0;





          if( !v )
            return nullptr;



        else if(sz>=0){

            while(j<sz){

               t = t->next;
               v = v->next;
                j++;

               }

        t->next = v->next;
        }
        else
            head = head->next;


        return head;


    }


    void display(ListNode *a){
 do {    cout<<" "<<a->val<<" ";    }   while(a=a->next);
    }


int main()
{
   struct ListNode *a , *b,*c ,*d;
    a = new ListNode();
    b = new ListNode();
    c = new ListNode();
    d = new ListNode();
    a->next = b ;
    //b->next= c;
   // c->next =d;
    a->val = 1;
    b->val = 2;
    //c->val = 0;
    //d->val = -1;


    a = removeNthFromEnd(a,);
    display(a);



    return 0;
}
