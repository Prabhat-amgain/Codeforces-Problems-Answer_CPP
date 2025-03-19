/*
                                                     A. Translation
                                                                                   time limit per test1 second
                                                                                   memory limit per test256 megabytes
The translation from the Berland language into the Birland language is not an easy task.
Those languages are very similar: a Berlandish word differs from a Birlandish word with the same meaning a little: 
it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc.
However, making a mistake during the "translation" is easy. Vasya translated the word s from Berlandish into Birlandish as t.
Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters.
The input data do not contain unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.
Examples
Input:
code
edoc
Output:
YES

Input:
abb
aba
Output:
NO

Input:
code
code
Output:
NO

*/
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int i,j;
    string s,t,r;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s == t)
     cout<<"YES";
    else
      cout<<"NO";
}

