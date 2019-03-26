 /*
Nama Program		: Pretest-04
Nama				: Muhammad Daffa Alfarizqi
NPM					: 140810180039
Tanggal Pembuatan	: Selasa, 26 Maret 2019
Deskripsi			: Single Linked List + Sort
*/

#include<iostream>
using namespace std;

struct ElemtList
{
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList (List& First)
{
	First = NULL;
}

void createElmt (pointer& pBaru)
{
	pBaru= new ElemtList;
	cout << "Nama : ";cin >> pBaru->nama;
	cout << "NPM : ";cin >> pBaru->npm;
	cout << "IPK : ";cin >> pBaru->ipk;
	pBaru->next=NULL;
}

void traversal (List First, int t)
{
	pointer pBantu;
	if (First==NULL)
        {
  		cout << "List Kosong\n";
		}
 	else
 	{
		pBantu=First;
		do
		{
			cout<<"No\t NPM\t\t\t Nama \t\t\t\t\t IPK"<<endl;
			for(int i=0; i<=t; i++)
			{
				cout<<i+1<<"\t "<<pBantu->npm<<"\t\t\t "<<pBantu->nama<<"\t\t\t\t\t "<<pBantu->ipk<<endl;
			}
			pBantu = pBantu->next;
		}while(pBantu != NULL);
    {
			cout << endl;
    }
	}
}
void insertsortnpm(List& First, pointer pBaru)
{
	if (First==NULL)
	First=pBaru;
	else
    {
		pBaru->next=First;
		First=pBaru;
	}
}

main()
{
	pointer p;
	List mhs;
	int n, t;

	createList (mhs);

	while(1){
	system("cls");
	traversal(mhs, t);
	cout<<endl;
	cout<<"1. Tambah Data"<<endl;
	cout<<"2. Keluar"<<endl;
	cout<<"Pilih : ";cin>>n;
		switch(n)
		{
			case 1:
				createElmt(p);
				insertsortnpm(mhs, p);
			break;

			case 2:
				return 0;
			break;

		}

	}

}
