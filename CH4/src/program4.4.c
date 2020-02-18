
typedef int element;
typedef struct {

    int top;
} StackType;


int main(void)
{
    StackType *s;
    s= (StackType *)malloc(sizeof(StackType));
    init_stack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    free(s);
}