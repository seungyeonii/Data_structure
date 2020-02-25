/*
void dinsert(DListNode *before, element data)
{
    DListNode *newnode = (DListNode *)malloc(sizeof(DListNode));
    strcpy(newnode -> data, data);
    newnode -> llink = before;
    newnode -> rlink = before -> rlink;
    before -> rlink -> llink = newnode;
    before -> rlink = newnode;
}
*/