#define MAX_ELEMENTS 100
int scores[MAX_ELEMENTS]; // 자료구조

int get_max_source(int n)
{
    int i, largest;
    largest = scores[0];
    for(i = 0; i<n; i++){
        if(scores[i] > largest){
            largest = scores[i];
        }
    }
    return largest;
}