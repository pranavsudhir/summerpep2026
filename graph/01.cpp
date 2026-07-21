#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
int main() {
    int n, m;
    cout << "Enter vertices: ";
    cin >> n;
    cout << "Enter edges: ";
    cin >> m;
    unordered_map<int, list<int>> adjlist;
    cout << "Enter edges (u v):\n";
    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout << "Adjacency List:\n";
    for(auto i : adjlist) {
        cout << i.first << " -> ";
        for(auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
}