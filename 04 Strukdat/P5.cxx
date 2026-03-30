#include <iostream>
#include <string>

using namespace std;

struct Node {
    string judul;
    int tahun;
    string author;
    Node* next;
    
    Node(string j, int t, string a) : judul(j), tahun(t), author(a), next(nullptr) {}
};

int getLength(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int calculateMiddlePos(int count) {
    if (count == 0) return 1;
    if (count % 2 == 0) return count / 2;
    return (count / 2) + 1;
}

void display(Node* head) {
    if (!head) {
        cout << "\n[ List is currently empty ]" << endl;
        return;
    }
    cout << "\n--- Current Library List ---" << endl;
    Node* temp = head;
    int i = 1;
    while (temp) {
        cout << i++ << ". \"" << temp->judul << "\" (" << temp->tahun << ") by " << temp->author << endl;
        temp = temp->next;
    }
}

void addHead(Node*& head, string j, int t, string a) {
    Node* newNode = new Node(j, t, a);
    newNode->next = head;
    head = newNode;
}

void addTail(Node*& head, string j, int t, string a) {
    Node* newNode = new Node(j, t, a);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void addMiddle(Node*& head, string j, int t, string a) {
    int pos = calculateMiddlePos(getLength(head));
    if (pos <= 1) {
        addHead(head, j, t, a);
        return;
    }
    Node* newNode = new Node(j, t, a);
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void editNode(Node* head, int pos, string j, int t, string a) {
    Node* temp = head;
    for (int i = 1; i < pos && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp) {
        temp->judul = j;
        temp->tahun = t;
        temp->author = a;
    }
}

void deleteHead(Node*& head) {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void deleteMiddle(Node*& head) {
    if (!head) return;
    int pos = calculateMiddlePos(getLength(head));
    if (pos <= 1) {
        deleteHead(head);
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }
    if (temp && temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

void deleteAll(Node*& head){
    while(head != nullptr){
        deleteHead(head);
    }
}

int main() {
    Node* head = nullptr;
    int choice, tahun, pos;
    string judul, author;

    while (true) {
        display(head);
        cout << "\n1. Add Head\n2. Add Tail\n3. Add Middle (Auto)\n4. Edit (Index)\n5. Delete Head\n6. Delete Tail\n7. Delete Middle (Auto)\n8. Delete All\n9. Exit\nSelection: ";
        cin >> choice;
        cin.ignore();

        if (choice == 9) break;

        if (choice >= 1 && choice <= 4) {
            if (choice == 4) {
                cout << "Index to edit: "; cin >> pos; cin.ignore();
            }
            cout << "Judul: "; getline(cin, judul);
            cout << "Tahun: "; cin >> tahun; cin.ignore();
            cout << "Author: "; getline(cin, author);
        }

        switch (choice) {
            case 1: addHead(head, judul, tahun, author); break;
            case 2: addTail(head, judul, tahun, author); break;
            case 3: addMiddle(head, judul, tahun, author); break;
            case 4: editNode(head, pos, judul, tahun, author); break;
            case 5: deleteHead(head); break;
            case 6: deleteTail(head); break;
            case 7: deleteMiddle(head); break;
            case 8: deleteAll(head);
        }
    }
    return 0;
}