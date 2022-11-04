#include <string>
#include <map>
#include <vector>

using namespace std;

class Intruso{
    /*Continue a implementação da classe Intruso*/
    private:
        vector<char>senhasRecebidas;
    public:
        void set_senha_vazada(string vazou);
        string crack_senha();
};
