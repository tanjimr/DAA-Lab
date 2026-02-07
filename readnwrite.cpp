#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out ("output.txt");

    if(!in)
{
    cerr<< "cant read the file";
}

vector<int> arr ;
int val;

while (in >> val)
{
    arr.push_back(val);
}

sort(arr.begin(), arr.end());

for(int i = 0; i<arr.size();i++)
{
    out<<arr[i]<<" ";
}


}