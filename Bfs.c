#include <stdio.h>

#define MAX 5

int graph[MAX][MAX] = {
    {0,1,1,0,0},
    {1,0,0,1,1},
    {1,0,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0}
};

int visited[MAX] = {0};
int queue[MAX];
int front = 0, rear = 0;

void BFS(int start) {
    visited[start] = 1;
    queue[rear++] = start;

    while(front < rear) {
        int vertex = queue[front++];
        printf("%d ", vertex);

        for(int i = 0; i < MAX; i++) {
            if(graph[vertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    printf("BFS Traversal: ");
    BFS(0);
    return 0;
}
