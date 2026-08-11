class Solution {
private:
    bool dfs(int node,vector<int>& pvis,vector<int>& vis,vector<vector<int>>& adj ){
        vis[node]=1;
        pvis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(dfs(it,pvis,vis,adj)==true) return true;
            }else if(pvis[it]==1) return true;
        }
        pvis[node]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses,0);
        vector<int> pvis(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                 if(dfs(i,pvis,vis,adj)==true) return false;
            }
        }
        return true;
        
    }
};