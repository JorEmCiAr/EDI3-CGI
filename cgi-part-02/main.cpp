#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <utility>
#include <unordered_map>
#include <conio.h>

using namespace std;

unordered_map <std::string,std::string> generateUriMap(std::string uri){
    unordered_map<std::string,std::string> m;
    std::string equal = "=";
    std::string ampersand = "&";
    size_t pos = 0;
    std::string key;
    std::string value;
    while((pos = uri.find(equal)) != std::string::npos){
        key = uri.substr(0,pos);
        uri.erase(0,pos + equal.length());
        value = uri.substr(0,uri.find(ampersand));
        uri.erase(0,uri.find(ampersand) + ampersand.length());
        m[key] = value;
    }
    return m;
}

int main ()
{

cout << "Content-type:text/html\r\n\r\n";
cout << "<html>\n";
cout << "<head>\n";
cout << "<title>Hello World - First CGI Program</title>\n";
cout << "</head>\n";
cout << "<body>\n";

cout << "<form action='main.exe' method='post'";
cout << "<label>Introduzca su nombre:</label>\n";
cout << "<input type='text' name=\"txt1\" >\n";
cout << "<input type='submit' name='sbmt1' value='enviar'>\n";
cout << "</form>\n";

string str = "";
cin >> str;
unordered_map<std::string,std::string> m = generateUriMap(str);

cout << "<h2>Hello World! "<< m["txt1"] << " This is my first CGI program</h2>\n";
cout << "</body>\n";
cout << "</html>\n";

return 0;
}


