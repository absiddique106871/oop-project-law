#include <iostream>
#include <string>
using namespace std;
class person {
public:
    string name;
    int age;
    int id;

    void setname(string n,int a,int i){
        name=n;
        age=a;
        id=i;
        cout<<"name ="<<n<<endl;
        cout<<"age ="<<a<<endl;
        cout<<"id ="<<i;
    }
};
int main() {
    person siddique;
    siddique.setname("abu bakkar",23,782488570);
    person fazlul;
    cout<<endl;
    fazlul.setname("fazlul",22,782488577);

    return 0;
}
