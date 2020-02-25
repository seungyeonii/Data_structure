/*
void enqueue(LinkedQueueType *q, element data)
{
    QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
    temp -> data = data;
    temp -> link = NULL;
    if(is_empty(q))
    {
        q->front = temp;
        q->rear = temp;
    }
    else{
        q->rear -> link = temp;
        q->rear = temp;
    }
}
*/