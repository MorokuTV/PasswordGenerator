#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

    static const char alphnum[] =  
 "0123456789" "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int strLen = sizeof(alphnum) -1;
    char GenRand(){
return alphnum[rand()%strLen];
  }


int main()
{
    int n, c=0, s=0;


srand(time(NULL));
    cout << "Enter how many digits for the password that you want: ";
    cin >> n;
    if(n <= 4)
    {
        cout << "Your password is too short, please make it longer!";
        return 0;
    }
    cout <<n<<endl;
    cout << "Your generated password is: ";
    N:
    char C;
    string D;
    for(int i = 0; i < n; i++)
{
    C = GenRand();
    D+=C;
    if (isdigit(C))
    {
        C++;
    }
 
}
if (n > 2 && (C == 0))
{
    goto N;
}
cout << D << endl << endl;
cout << "You password has been successfully saved to your desktop."<< endl;
    ofstream file_;
    file_.open("Saved_Password");
    file_ << D;
    file_.close();
cout << endl << endl << " Thank You for using this Program!";

return 0;
}
