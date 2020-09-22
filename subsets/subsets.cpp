
#include <iostream>
#include<vector>
using namespace std;
vector<char> subset;
void search(vector<char> v, int n, int k) {
    if (k == v.size()) {
        if (subset.size() == n) {
        for (auto it : subset) {

            cout << it;
        }
        cout << "\n";
    }
    }
    else {
        subset.push_back(v[k]);
        search(v, n,k+1);
        subset.pop_back();
        search(v, n,k + 1);
    }
}

int main()
{
    vector<char> v{'a', 'd', 'e', 'f'};
    search(v, 2, 0);
   
}

