/*Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.*/

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        bool isCycle = false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                isCycle = true;
                break;
            }
        }
        if (isCycle == false)
        {
            return NULL;
        }
        fast = head;
        while (fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};