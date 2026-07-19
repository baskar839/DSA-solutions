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

void DFS(int vertex) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for(int i = 0; i < MAX; i++) {
        if(graph[vertex][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    printf("DFS Traversal: ");
    DFS(0);
    return 0;
}
