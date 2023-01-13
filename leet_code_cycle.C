bool hasCycle(struct ListNode *head) {
    struct ListNode *curr,*test;

        curr = head;
        test = head;

        while(curr->next!=NULL && (test->next)->next!=NULL){
            curr = curr->next;
            test = (test->next)->next;

            if(curr==test){
                return true;
            }
        }

        return false;
    }
