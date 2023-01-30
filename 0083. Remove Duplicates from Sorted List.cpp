/*  Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

            Example 1:
            Input: head = [1,1,2]
            Output: [1,2]

            Example 2:
            Input: head = [1,1,2,3,3]
            Output: [1,2,3]
*/



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head ==  NULL || head -> next == NULL)
            return head;
        
        ListNode *temp = head;
        
        while(temp != NULL && temp -> next != NULL)
        {
            if(temp -> val == temp -> next -> val)
            {
                temp -> next = temp -> next -> next;
            }
            else
            {
                temp = temp -> next;
            }
        }
        return head;
    }    
};



