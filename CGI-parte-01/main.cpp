#include <iostream >
#include <string>
#include <vector>
#include <sstream>
#include <utility>

using namespace std;

std::vector<std::string> explode(std::string const & s, char delim)
{
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
    {
        result.push_back(std::move(token));
    }

    return result;
}

int main ()
{


    auto v = explode("hello world foo bar", ' ');
cout << "Content-type:text/html\r\n\r\n";
cout << "<html>\n";
cout << "<head>\n";
cout << "<title>Hello World - First CGI Program</title>\n";
cout << "</head>\n";
cout << "<body>\n";

cout << "<form action='hello_world_cgi_refact_01.exe' method='post'";
cout << "<label>Introduzca su nombre:</label>\n";
cout << "<input type='text' name='txt1' >\n";
cout << "<input type='submit' name='sbmt1' value='enviar'>\n";
cout << "</form>\n";

string str = "";
cin >> str;

cout << "<h2>Hello World! "<< str << "This is my first CGI program</h2>\n";
cout << "</body>\n";
cout << "</html>\n";
return 0;
}
