#include <string>

int main(int argc, char const *argv[])
{
    std::string s{"this is a string"};
    char c;

    for (size_t i = 0; i < s.size(); i++)
    {  
        if(s[i] > 'a' && s[i] <= 'z')
        s[i] &= ~32;
        c = s[i];
    }
    
    return 0;
}
