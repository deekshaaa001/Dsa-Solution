class Solution {
public:
    bool winnerOfGame(string colors) {
           ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int a = 0, b = 0;
        for(int i = 1; i< colors.size()-1; i++){
            
            if(colors[i-1]== 'A' && colors[i] =='A' && colors[i+1] =='A'){
                a++;
            }
            if(colors[i-1] == 'B' && colors[i] =='B' && colors[i+1]== 'B'){
                b++;
            }
        }
        return a > b;
    }
};