/*Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return nullv*/

class Solution
{
public:
    int lenght(ListNode *head)
    {
        int c = 0;
        ListNode *p = head;
        while (p != NULL)
        {
            c++;
            p = p->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        int l1 = lenght(headA);
        int l2 = lenght(headB);

        int d = 0;
        ListNode *p1;
        ListNode *p2;

        if (l1 > l2)
        {
            d = l1 - l2;
            p1 = headA;
            p2 = headB;
        }
        else if (l2 >= l1)
        {
            d = l2 - l1;
            p1 = headB;
            p2 = headA;
        }
        while (d)
        {
            p1 = p1->next;
            if (p1 == NULL)
            {
                return NULL;
            }
            d--;
        }
        while (p1 != NULL && p2 != NULL)
        {
            if (p1 == p2)
            {
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};