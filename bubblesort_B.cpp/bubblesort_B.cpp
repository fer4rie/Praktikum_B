#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input()
{
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array :";    //output ke layar
        cin >> n;                                          // input dari pengguna
        if (n <= 20)                                       // jika n kurang dari atau sama dengan 20, maka
            break;                                         // keluar dari loop
        else
        {                                                               // jika n lebih dari 20, maka
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    //output ke layar
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++)
    {                                               // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";      //output ke layar
        cin >> arr[i];                              // input dari pengguna
    }
}

void bubbleSortArray()
{                       //prosedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1;       // step 1

    do 
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        { //step 2
            if (arr[j] > arr[j + 1])
            { //step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass += 1;      //step 4

        cout << "\nPass " << pass - 1 << ": ";  //Number of pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";  //Menampilkan data pada number of pass
        }
    }