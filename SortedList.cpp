
#include "SortedList.h"
/*
 *
 */


template<class T>
SortedList<T>::SortedList() {

}

template<class T>
void SortedList<T>::MakeEmpty() {

}

template<class T>
bool SortedList<T>::IsFull() const {
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool SortedList<T>::Contains(T someItem) {
    return false;
}

template<class T>
void SortedList<T>::AddItem(T item) {

    Node* currNode = head;
    Node* prevNode = nullptr;

    Node* nodeInsert = new Node; //creates node
    nodeInsert -> info = item; //make it able to store item inside the new node

    while (currNode != nullptr){ //loop as long as it's not = to nullptr
        if(item < currNode -> info){ //sorting
            nodeInsert -> next= currNode; //setting link to the next node

            if(head ==currNode){
                head = nodeInsert; //if added to the head, the new node will become the new head
            }
            else{
                prevNode -> next = nodeInsert; //sets up link from previous node
            }
            return;
        }
        prevNode = currNode;
        currNode = currNode->next;

    }

    prevNode -> next = nodeInsert; //sets up the link from previous node to current
}

template<class T>
void SortedList<T>::DeleteItem(T item) {

}

template<class T>
void SortedList<T>::ResetIterator() {

}

template<class T>
int SortedList<T>::GetNextItem() {
    if (currentPos >= length) {
        throw "Out of bounds";
    }

    return T();
}

