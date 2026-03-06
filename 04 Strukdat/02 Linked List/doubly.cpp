#include<iostream>
using namespace std;

struct Buku{
	int id;
	string judul;

	Buku *next;
	Buku *prev;
};

int main(){
	Buku *head, *nodeN;
	head = new Buku();
	nodeN = new Buku();

	head -> id = 1; head -> judul = "Yoga";
	// head -> next -> id = 2; head -> next -> judul = "Yigga";
	// head -> next -> next = NULL;
	head -> next = nodeN; head -> prev = NULL;
	nodeN -> id = 2; nodeN -> judul = "Yigga";
	nodeN -> next = NULL; nodeN -> prev = head;

	Buku *temp = head;
	int i = 1;
	while(temp != NULL){
		cout << "Node " << i << ":" << endl;
		cout << "ID: " << temp -> id << endl;
		cout << "Judul: " << temp -> judul << endl;
		cout << endl;
		temp = temp -> next;
		i++;
	}
}