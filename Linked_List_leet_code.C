/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    int n;
  struct ListNode *last1,*last2,*i,*j;

if(list1==NULL && list2==NULL)
{
    return NULL;
}

if(list1==NULL && list2!=NULL)
{
    return list2;
}

if(list1!=NULL && list2==NULL)
{
    return list1;
}

last1=list1;
while(last1->next!=NULL)
{
    last1=last1->next;
}

last1->next=list2;
i=list1;
j=list1->next;

// while((i->next)->next!=NULL)
// {
//     // printf("Hi");
//     while(j->next!=NULL)
//     {
//         if((j->val)<(i->val))
//         {
//             n=j->val;
//             j->val=i->val;
//             i->val=n;
//         }
//         j=j->next;
//     }
//     i=i->next;
// }


while (i->next != NULL)
    {
      struct ListNode *b = i->next;
      while (b != NULL)
    {
      if ((i->val) > (b->val))
        {
          n = i->val;
          i->val = b->val;
          b->val = n;
        }
      b = b->next;

    }
      i = i->next;
    }
  return list1;






}
