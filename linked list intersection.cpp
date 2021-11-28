#include <iostream>

using namespace std;

int main()
{


  struct ListNode {
     int val;
 ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {



        int countA=0;
         ListNode* tempA = headA;
        while(tempA->next!=NULL)
        {
            countA++;
            tempA=tempA->next;
        }
         int countB=0;
           ListNode* tempB = headB;
        while(tempA->next!=NULL)
        {
            countB++;
            tempB=tempB->next;
        }
        int diff= abs(countA-countB) ;
        tempA=headA;
        tempB=headB;


        if(countA>countB)
        {
            while(diff-->0)
            {
                tempA=tempA->next;
            }
        }
        else{
            while(diff-->0)
            {
                tempB=tempB->next;
            }
        }
        while(tempA!=tempB)
        {
             tempA=tempB->next;
            tempA=tempB->next;


            if(tempA==NULL||tempB==NULL)
            {
                return NULL;
            }   }return tempB;




    }
};
    return 0;
}
