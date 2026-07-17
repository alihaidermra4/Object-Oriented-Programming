#include <iostream>
using namespace std;

class AccessModifiers {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    AccessModifiers() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    void showPrivate() {
        cout << "Private Variable: " << privateVar << endl;
    }
    void showProtected(){
    cout << "Protected Variable: " <<protectedVar << endl;
}

    friend void showProtected(AccessModifiers &ob);
};

// Corrected function definition using the scope resolution operator
void showProtected(AccessModifiers &ob){
    cout << "Protected Variable: " << ob.protectedVar << endl;
}


int main() {
    AccessModifiers obj;
    cout<<"Public: "<<obj.publicVar<<endl;
    //cout<<"Private: "<<obj.privateVar<<endl;
    //cout<<"Protected: "<<obj.protectedVar<<endl;
    
    cout << "Accessing Public Variable: " << obj.publicVar << endl;
    obj.showPrivate();
    obj.showProtected();

    cout << "Accessing Protected Variable from Friend Function"<<endl;
    
    showProtected(obj);

    return 0;
}

