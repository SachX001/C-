#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <map>
using namespace std;

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) { 
           map<int , int> freq;
           set<int> data;

           for(auto x : arr)
                freq[x]++;
                
                for(auto x : freq) 
                    data.insert(x.second);

                if(freq.size() == data.size()) {
                    return true;
                }
                else {
                    return false;
                }   
            }
};

int main() {
    vector<int> arr;
    string line;

    getline(cin , line);
    stringstream ss(line);
    int x;

    while(ss >> x) {
    arr.push_back(x);
    }

    Solution s;
    cout << boolalpha << s.uniqueOccurrences(arr);

    return 0;   
}
