#include <vector>
using namespace std;
template <typename T>
class Gestiune
{
    public:
        Gestiune();
        Gestiune(const Gestiune &other)
        {
            this->Lista=other.Lista;
        }
        virtual ~Gestiune()
        {
            Lista.clear();
        }
        void operator+=(const T&x)
        {
            Lista.push_back(x);
        }
        void afis()
        {
            for(int i=0;i<Lista.size();++i)
                cout<<Lista[i]<<'\n';
        }
    protected:
        vector<T>Lista;
};
