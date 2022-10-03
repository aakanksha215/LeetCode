/*Given the head of a linked list, rotate the list to the right by k places.*/

class Solution
{
public:
    ListNode *helper(ListNode *head)
    {
        ListNode *p = head;
        ListNode *q = head;
        while (q->next->next != NULL)
        {
            q = q->next;
        }
        p = q->next;
        p->next = head;
        head = p;
        q->next = NULL;

        return head;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }
        ListNode *curr = head;
        int len = 0;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        k = k % len; // If k>len

        while (k--)
        {

            head = helper(head);
        }

        return head;
    }
};