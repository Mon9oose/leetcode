// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         int n=score.size();
//         map<int,int>mp1;
//         vector<string>result(n);
//         for(int i=0;i<n;i++){
//             mp1[score[i]]=i;
//         }
//         sort(score.begin(),score.end());
//         pair<int,string>p1;
//         for(int i=0;i<n;i++){
//             p1.first=score[i];
//             if(i==0){
//                 p1.second="Gold Medal";
//             }
//             if(i==1){
//                 p1.second="Silver Medal";
//             }
//             if(i==2){
//                 p1.second="Bronze Medal";
//             }
//             else{
//                 p1.second=i+1;
//             }
//         }
//         int index=0;
//        for(auto it:mp1){
//           if(it.first==p1.first){
//              index=it.second;
//              result[index]=p1.second;
//           }
//        }
//        return result;
//     }
// };

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int, int> mp1;
        vector<string> result(n);
        
        for (int i = 0; i < n; i++) {
            mp1[score[i]] = i;
        }       
        sort(score.begin(), score.end(), greater<int>());   
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[mp1[score[i]]] = "Gold Medal";
            } else if (i == 1) {
                result[mp1[score[i]]] = "Silver Medal";
            } else if (i == 2) {
                result[mp1[score[i]]] = "Bronze Medal";
            } else {
                result[mp1[score[i]]] = to_string(i + 1);
            }
        }
        
        return result;
    }
};
