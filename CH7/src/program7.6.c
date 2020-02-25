/*
void ddelete(DListNode * head, DListNode* removed)
{
    if (removed == head) return;
    removed -> llink -> rlink = removed -> rlink;
    removed -> rlink -> llink = removed -> llink;
    free(removed);
}
*/