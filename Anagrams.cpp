vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector< vector<int> > groups;
    vector<int> temp;
    if(A.size()==0){
        return groups;
    }
    vector<string> sorted;
    sorted=A;
    vector<int> grouped(A.size(),0); 
    for(int i=0;i<A.size();++i){
        sort(sorted[i].begin(),sorted[i].end());
    }
    for(int i=0;i<A.size();++i){
        if(grouped[i]==1){
            continue;
        }
        else{
            temp.push_back(i+1);
        }
        for(int j=i+1;j<A.size();++j){
            if((grouped[j]==1)){
                continue;
            }
            if(sorted[i]==sorted[j]){
                temp.push_back(j+1);
                grouped[i]=1;
                grouped[j]=1;
            }
        }
        groups.push_back(temp);
        temp.clear();
    }
    
    return groups;
}
