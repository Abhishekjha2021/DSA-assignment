int Solution::solve(string A) {
    unordered_map<char,int>umap;
    for(char ch : A){
        umap[ch]++;
    }
    int odd=0;
    for(auto itr=umap.begin();itr!=umap.end();itr++){
        if(itr->second%2==1){
            odd++;
        }
    }
    if(odd>1){
        return 0;
    }
    return 1;
}
