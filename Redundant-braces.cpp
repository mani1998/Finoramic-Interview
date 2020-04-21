int Solution::braces(string A) {
    stack<int> braces;
    char top,l_top;
    int len=0;
    for(int i=0;i<A.length();++i){
        if(A[i]==')'){
            braces.push(A[i]);
            top=braces.top();
            braces.pop();
            l_top=braces.top();
            if(top==')' && l_top=='('){
                return 1;
            }
            else{
                braces.push(top);
            }
            top=braces.top();
            while(top!='('){
                len+=1;
                braces.pop();
                top=braces.top();
            }
            if(len==2){
                return 1;
            }
            braces.pop();
            if(braces.empty() && i==A.length()){
                return 0;
            }
          }
        else{
            len=0;
            braces.push(A[i]);
        }
    }
    return 0;
}
