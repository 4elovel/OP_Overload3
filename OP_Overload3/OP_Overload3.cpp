#include <iostream>
#include <string>
using namespace std;
class Str {
private:
    string st; 
public:
    Str()
    {
        st = "";
    }

    Str(string str)
    {
        st = str;
    }

    void Print() {
        cout << st << "\n";
    }

    Str operator*(const Str& N)
    {
        Str temp;
        for (size_t i = 0; i < st.size(); i++)
        {
            for (size_t j = 0; j < N.st.size(); j++)
            {
                if (st[i]==N.st[j])
                {
                    temp.st += st[i];
                }
            }
        }
        return temp;
    }
};
int main()
{
    Str a("HasefGljklosghj!");
    Str b("zxcvvnHnm@^V!zCelo");
    Str c = a * b;
    c.Print();
}