#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

#include "func.h"

int main()
{
    int length = 0;
    std::vector<apteka> vec;
    std::string input_path = "C:/intput.txt";
    std::string output_path = "C:/output.txt";
    std::ofstream input_file;
    std::ifstream output_file;
    input_file.open(input_path, std::ios::app);
    output_file.open(output_path);
    if(output_file.is_open() == true)
    {
        std::cout <<"grats"<<std::endl;
    }
    else
    {
        return 0;
    }
    from_file(vec, output_file, length);
    print_vec(vec, length);
    search_vec(vec, length);
    add_vec(vec, length);
    print_vec(vec, length);
    delete_vec(vec, length);
    print_vec(vec, length);
    redact_vec(vec, length);
    print_vec(vec, length);
    sort_vec(vec);
    print_vec(vec, length);   
    record_vec(vec, length, input_file);

    output_file.close();   
    input_file.close();
}

