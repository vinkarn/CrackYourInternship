long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int p1 = 0;
    int p2 = m-1;//fith element in the array
    int lastDiff=a[p2]-a[p1];
    int curr;
    for(p1=1;p1<n-m+1;p1++){
        p2=p1+m-1;
        curr = a[p2]-a[p1];
        if(curr<lastDiff){
            lastDiff=curr;
        }
    }
    return lastDiff;
    
    }   
