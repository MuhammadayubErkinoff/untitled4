#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Student{
private:
    string studentName;
private:
    long long studentID;
private:
    string studentGroupName;
public:
    Student(string &name, long long int ID, string &groupName){
        this->studentID=ID;
        this->studentName=name;
        this->studentGroupName=groupName;
    }
    Student(){}

    string getStudentGroupName() {
        return studentGroupName;
    }
};





int main() {
    int n;
    cin>>n;
    vector<Student> vec(n);
    for(int i=0;i<n;i++){
        string a,c;
        long long b;
        cin>>a>>b>>c;
        vec[i]= Student(a,b,c);
    }
    map<string,int>mp;
    for(Student s:vec){
        mp[s.getStudentGroupName()]++;
    }

    for(auto u:mp){
        cout<<u.first<<":"<<u.second<<"\n";
    }
}
