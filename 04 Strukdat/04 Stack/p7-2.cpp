#include <iostream>
#include <string>
using namespace std;

// ukuran stack
const int ukuran = 5;

// deklarasi stack
struct Stack {
    string data[ukuran];
    int top;
}; Stack s;

void createStack(){
    s.top = -1;
}

bool isEmpty(){
    if(s.top == -1){
        return true;
    } else {
        return false;
    }
}

bool isFull(){
    if(s.top == ukuran-1){
        return true;
    } else {
        return false;
    }
}

void pushStack(string data){
    if(!isFull()){
        s.top++;
        s.data[s.top] = data;
        cout << "Data: " << s.data[s.top] << " telah ditanbahkan\n";
    } else {
        cout << "Stack penuh!\n";
    }
}

void peekStack(int index){
    if(isEmpty()){
        cout << "Stack kosong!\n";
    } else {
        cout << "Data pada indeks " << index << ": " << s.data[index] << "\n";
    }
}

void changeData(int index, string data){
    if(isEmpty()){
        cout << "Stack kosong!\n";
    } else {
        s.data[index] = data;
        cout << "Data pada indeks " << index << " berhasil diubah menjadi: " << s.data[index] << "\n";
    }
}

void popStack(){
    if(isEmpty()){
        cout << "Stack kosong!\n";
    } else {
        s.data[s.top] = "";
        s.top--;
        cout << "Pop berhasil!\n";
    }
}

void destroyStack(){
    s.top = -1;
    cout << "Stack berhasil dihancurkan!\n";
}

void nukeStack(){
    for(int i = 0; i<ukuran; i++){
        s.data[i] = "";
    }
    s.top = -1;
    cout << "Stack berhasil dihancurkan secara permanen!\n";
}

void showStack(){
    if(!isEmpty()){
        cout << "Isi stack: ";
        for(int i = s.top; i>=0; i--){
            cout << s.data[i] << " ";
        } cout << "\n";
    } else {
        cout << "Stack kosong!\n";
    }
}

int countData(){
    if(isEmpty()){
        return 0;
    } else {
        return s.top + 1;
    }
}

int main(){
    createStack();
    pushStack("Alpha");
    pushStack("Beta");
    pushStack("Charlie");
    pushStack("Delta");
    pushStack("Echo");
    pushStack("Foxtrot");
    cout << "Jumlah data: " << countData() << "\n";
    changeData(2, "CharlieKirk");
    peekStack(0);
    peekStack(2);
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    cout << "Jumlah data: " << countData() << "\n";
    pushStack("Alpha");
    pushStack("Beta");
    pushStack("Charlie");
    pushStack("Delta");
    pushStack("Echo");
    pushStack("Foxtrot");
    cout << "Jumlah data: " << countData() << "\n";
    destroyStack();
    showStack();
    cout << "Jumlah data: " << countData() << "\n";
    nukeStack();
    showStack();
    cout << "Jumlah data: " << countData() << "\n";
    return 0;
}