#include <iostream>
#include <map>
#include<vector>
using namespace std;
int main()
{      

      int t;
      cin>>t;
      while(t--){
          int n;
         cin>>n;
        vector<int> v(n);
        map<int,int> mp;
         for(int i =0; i<n; i++){
             cin>>v[i];
             mp[v[i]]++;
         }

         if(mp.size()==1) cout<<"Yes\n";
         else if(mp.size()>=3) cout<<"No\n";
         else{
               vector<int> v1;
               for(auto it : mp){
                   v1.push_back(it.second);
               }
               int dif = abs(v1[0]-v1[1]);
               if(dif<=1) cout<<"Yes\n";
               else{
                 cout<<"No\n";
               }

         }



      }    
     
    return 0;
}