#include <bits/stdc++.h>

using namespace std;

struct sides{
  long long a;
  long long b;
  long long c;
};

// Add any helper functions you may need here



int countDistinctTriangles(vector <sides> arr) {
  // Write your code here
  int n = arr.size(), count = 0;
  
  vector <int> triangle[n];
  map<vector<int>, int> mymap;
  
  for(int i = 0; i < n; i++)
  {
    triangle[i].push_back(arr[i].a);
    triangle[i].push_back(arr[i].b);
    triangle[i].push_back(arr[i].c);
     
    sort(triangle[i].begin(), triangle[i].end());
    
    //map each triangle side to its frequency
    if(mymap.find(triangle[i]) == mymap.end())
        mymap[triangle[i]] = 1;
    
  }
  
  map <vector<int>, int>::iterator mit = mymap.begin();
  while(mit != mymap.end())
  {
    count += mit->second;
    mit++;
  }
  
  return count;
}
