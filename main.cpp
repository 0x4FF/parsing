#include <iostream>
#include <fstream>
#include <string>

std::fstream file_to_parse, file_to_write;
std::string file_line;
int numbers;


void parse(char* argv[])
{
    std::string file_name = argv[1];
    file_to_parse >> numbers;file_to_parse.close();
    file_to_write.open(file_name);
    file_to_write << "{\n" "\t\"Key:\": " << "" << "\"" << file_line << "\"," << "\n" << "\t\"Value:\": " << "\"" << numbers << "\"" << "\n}" << std::endl;
    file_to_write.close();
}

int main(void)
{
   
    if (!file_to_parse.is_open()) { std::cout <<"Error opening file"; }
    else if (file_to_parse.is_open())
    {
        while(getline(file_to_parse, file_line, ':'))
        {
            parse(NULL);
        }

    }

}
