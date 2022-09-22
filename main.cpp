#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[])
{
    std::string file_name = argv[1];
    std::fstream file_to_parse, file_to_write;
    std::string file_line;
    int numbers;
    file_to_parse.open(file_name);
    
    if (!file_to_parse.is_open()) { std::cout <<"Error opening file"; }
    else if (file_to_parse.is_open())
    {

        while(file_to_parse)
        {
            
            getline(file_to_parse, file_line, ':');
            file_to_parse >> numbers;
            file_to_write.open(file_name);
            file_to_write << "{\n" "\t" "" << "" << "\"" << file_line << "\"" <<  ":  " << "\"" << numbers << "\"" << "\n" << "}";
            file_to_write.close();file_to_parse.close();
    
        }

    }

}
