#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

void initialize() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

void display() {
    printf("Hash Table:\n");

    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("%d --> %d\n", i, hashTable[i]);
        else
            printf("%d --> Empty\n", i);
    }
}

int main() {
    initialize();

    insert(15);
    insert(25);
    insert(35);
    insert(45);

    display();

    return 0;
}
