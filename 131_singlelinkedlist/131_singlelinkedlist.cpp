#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
}; 

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "masukan NIM : ";
	cin >> nim;
	cout << "masukan nama : ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
	}
}