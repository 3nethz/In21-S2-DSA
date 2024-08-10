// C++ code to demonstrate traversal
// of a 2D vector
#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

	struct Node{
    // A node will 2 entities
    //1. data type int called label
    int CityName;
    //2. a int type list called neighbours
    list<int> ConnectedCities; 
};

struct Graph{
    //graph will have an array of type "node" with length specified by n
    int n=8;
    Node * nodes = new Node[n];

    void intializenodes(){
        //iterate through the nodes and assign labels
        for(int i=0;i<n;i++){
            nodes[i].CityName = i +1 ;
        }
    }

    void addedge(int u, int v){
        nodes[u-1].ConnectedCities.push_back(v);
		nodes[v-1].ConnectedCities.push_back(u);
    }

    void print(){
        for (int i = 0; i < n; i++){
            cout << i + 1 << "-->";
            for(const auto& element: nodes[i].ConnectedCities){
                cout << element << " " ;
            }
            cout << endl;
        }
    }
};



// Driver Method

int main()
{
	// Initializing 2D vector "vect" with
	// sample values
	vector<vector<int> > vec{ { 1, 2},
							{ 3, 1},
							{ 2, 3} };

	// Displaying the 2D vector


	

	for (int i = 0; i < 3; i++) {
		for (
			auto it = vec[i].begin();
			it != vec[i].end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	return 0;
}
