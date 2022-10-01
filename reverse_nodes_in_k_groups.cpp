class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int count = 0;
        ListNode *p = head;
        while (count < k)
        {
            if (p == NULL)
            {
                return head;
            }
            count++;
            p = p->next;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nxt;

        count = 0;

        while (count < k && curr != NULL)
        {
            nxt = curr->next;

            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }

        if (nxt != NULL)
        {
            head->next = reverseKGroup(nxt, k);
        }

        return prev;
    }
};