#include <iostream>
#include <string>


std::string Spongemock(std::string s)
{
  std::string message = {};
  int n{0};

  for (int i{0}; i < s.size(); ++i)
  {
    if (isspace(s[i])) message.push_back(' ');
    else if (ispunct(s[i])) message.push_back(s[i]);
    else if ((n%2))
    {
      message.push_back(toupper(s[i]));
      ++n;
    }
    else
    {
      message.push_back(tolower(s[i]));
      ++n;
    }
  }
return message;
}

int main()
{
   while (true)
   {
      std::cout << "\n\n\nSpongemockify:\t ";
      std::string s; std::getline(std::cin, s);
      std::cout << "\n\t\t " << Spongemock(s);
   }
   return 0;
}