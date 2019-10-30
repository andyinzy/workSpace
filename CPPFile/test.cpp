#include <vector>
#include <cstdio>
using namespace std;

int main() {
    vector<int>arr;
    vector<int>::iterator it;
    for (int i = 0; i < 1000; i++) {
        arr.push_back(i);
    }
    for (int i = 0; i < 999; i++) {
        printf("%d",*(arr.begin()+i));
    }
    int x = 1;
    arr.push_back(x);
    arr.pop_back(x);
    ret = arr.size();
    arr.clear();
    arr.insert(it,x);

}

