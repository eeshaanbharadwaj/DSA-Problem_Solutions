#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "Eeshaan";
    int start=0, end=s.length()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    for(char c: s){
        cout<<c;
    }
    return 0;
}