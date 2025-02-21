#include <bits/stdc++.h>  
#define N 100000  
#define f(i,a,b) for(int i=a;i<=b;i++)  
using namespace std;  
  
string s; // 输入的字符串  
int m=0, x=0; // m存储最长回文子串的长度，x存储最长回文子串的中心位置  
int wk(int k,int l){
int le=0;
while(k>=0&&l<s.size()&&s[k]==s[l])k--,l++,le++;
      return le;
}
   int main(){
   getline (cin,s);
   
   for(int i=0;i<s.size();i++){
   int m1=wk(i,i);
   int m2=wk(i,i+1);	
   if(2*m1-1>m)m=2*m1-1,x=i;
   if(2*m2>m)m=2*m2,x=i;
   ;	
   }
   cout<<x<<endl;
   cout<<m<<endl;
   
   if(1&m){ int k=x-m/2,l=x+m/2;
        for(int i=k;i<=l;i++)cout<<s[i];        
   }
   else{int k=x-m/2+1,l=x+m/2;
        for(int i=k;i<=l;i++)cout<<s[i]; 
   }
   



    return 0;  
}
