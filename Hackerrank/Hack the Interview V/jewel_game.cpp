#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMaxScore' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING jewels as parameter.
 */

bool notValid(string a){
    int n=a.size();
    if(n<2){
        return true;
    }
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            return false;
        }
    }
    return true;
}

int getMaxScore(string jewels) {

    if(notValid(jewels)){
        return 0;
    }
    int n=jewels.size();
    if(jewels[0]==jewels[1]){
        return 1+getMaxScore(jewels.substr(2,n));
    }
    for(int i=1;i<n;i++){
        if(jewels[i-1]==jewels[i]){
            return 1+getMaxScore(jewels.substr(0,i-1)+jewels.substr(i+1,n));
        }
    }
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string jewels;
        getline(cin, jewels);

        int ans = getMaxScore(jewels);

        fout << ans << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
