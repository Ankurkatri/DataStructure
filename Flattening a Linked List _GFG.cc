#include<iostream>
using namespace std;
 #include<string>
    #include<climits>
    string largestGoodInteger(string num) {
        int max=INT_MIN;
        for(int i=0;i<num.size();i++){
            if(num[i]==num[i+1]&& num[i+1]==num[i+2]){
                if(num[i]>max){
                    max=num[i];
                }
                
            }
        }
        if(max==INT_MIN){
            
            return "";
        }
        if(max==0){
        
            return "000";
        }
        else{
        int l=max*100+max*10+max;
            string ans=to_string(l);
            return ans;
            }
    }

int main(){
string str[9]={"7","7","7","6","6","6","5","5","5"};
cout<<largestGoodInteger(str);
return 0;
}