#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* next;
};

void push(Node*& top, char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop(Node*& top) {
    if (top == nullptr) {
        cout << "stack kosong" << endl;
        return;
    }
    cout << top->data;
    Node* temp = top;
    top = temp->next;
    delete temp;
}

int main() {
    Node* top = nullptr;

    string nama;

    cout << "nama: ";
    cin >> nama;

    for (char c : nama) {
        push(top, c);
    }

    while (top != nullptr) {
        pop(top);
    }

    return 0;
}
