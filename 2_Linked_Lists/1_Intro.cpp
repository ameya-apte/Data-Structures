#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    };
};

int main() {
    Node* head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);

    Node* temp = head;
    for (int i = 0; i < 3; i++) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}


