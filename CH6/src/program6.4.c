/* 
ListNode* delete_first(ListNode *head)
{
    ListNode *removed;
    if (head==NULL) return NULL;
    removed = head;
    head = removed -> link;
    free(removed);
    return head;
} 
*/