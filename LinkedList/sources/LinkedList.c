#include "../headers/LinkedList.h"

BaseLinkedList *_linkedListConstructor  (char sizeOfEachElement, size_t initialCapacity)
{
    BaseLinkedList *newLinkedList = malloc(sizeof(*newLinkedList));
    newLinkedList->elements       = malloc(sizeOfEachElement * initialCapacity);

    newLinkedList->index    = 0;
    newLinkedList->size     = 0;
    newLinkedList->capacity = initialCapacity;

    return newLinkedList;
}

void linkedListresize(BaseLinkedList *linkedList, int newSize)
{
    linkedList->elements = realloc(linkedList->elements, newSize);
}

void linkedListDestructor(BaseLinkedList *linkedList)
{
    free(linkedList->elements);
    free(linkedList);
}