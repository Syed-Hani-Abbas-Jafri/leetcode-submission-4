#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct studnet {
   int age;
   string name;
   string surname;
   int standard; 
    
};
int main() {
    studnet st;
    
    cin >> st.age >> st.name >> st.surname >> st.standard;
    cout << st.age << " " << st.name << " " << st.surname << " " << st.standard;
    
    return 0;
}
