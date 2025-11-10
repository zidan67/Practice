#include <iostream>
#include <string>
using namespace std;
void StringSearch(string Name, string flower[8]) {
    bool name = false;
    for (int i=0; i<8; ++i) {
        if (flower[i]==Name) {
            name = true;
            break;
        }
    }
    if (name==false) {
        cout<<"The flower name is not present in the array."<<endl;
    }
    else if(name==true){
        cout<<"The flower name is present in the array."<<endl;
    }
}
int main(){
    string flowers[8];
    cout <<"Enter all 8 flower names:"<<endl;
    for(int i = 0; i < 8; i++) {
        cout<<"Flowers "<<i+1<<":";
        cin>>flowers[i];
    }
    string searchName;
    cout<<"Enter the flower name to search: ";
    for(int i=0; i<3; i++){
            cin>>searchName;
            StringSearch(searchName,flowers);
    }
}

