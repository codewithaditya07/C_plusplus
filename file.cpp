// file handling
#include <iostream>
#include <fstream>
#include<string>
using namespace std;



int main() {
    ofstream kk("madhav.txt");
    if (!kk) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    string k1;
    cout << "write a Paragraph to insert data into file:- ";
    getline(cin,k1);

    kk << k1 << endl;
    kk.close();

    cout << "Data written successfully." << endl;
    return 0;
}