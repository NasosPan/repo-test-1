#include <iostream>
#include <aliases.h>

int main (int argc, char *argv[])

{
  if ( argc != 2 )
    std::cout<<"usage: "<< argv[0] <<" <greetee>" << std::endl;
  else {
    std::string greetee = argv[1];
    std::cout << "Hello to " << greetee << std::endl;
    }
  
}
