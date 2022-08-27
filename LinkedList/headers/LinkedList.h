#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdlib.h>

typedef struct _BaseLinkedList
{
    void     *elements;
    size_t   index;
    size_t   size;
    size_t   capacity;
} BaseLinkedList;

#define LinkedList(type)            \
    struct                          \
    {                               \
        type     *elements;         \
        size_t   index;             \
        size_t   size;              \
        size_t   capacity;          \
        int      elementSize;       \
    } *

BaseLinkedList *_linkedListConstructor  (char sizeOfEachElement, size_t initialCapacity);
void            linkedListDestructor(BaseLinkedList *linkedList);
void            linkedListResize(BaseLinkedList *linkedList, int newSize);

#define LinkedList(type, initialCapacity) (LinkedList (type) ) _linkedListConstructor(sizeof(type), initialCapacity);

#define linkedListPushBack(linkedList, newElement)                        \
            if(linkedList->index > linkedList->size)                      \
            {                                                             \
                linkedListResize(linkedList,                              \
                    linkedList->capacity + (linkedList->capacity/2 + 1)); \
            }                                                             \
                                                                          \
            linkedList->elements[linkedList->index++] = newElement;       \
            linkedList->size++;

#endif // LINKED_LIST_H_