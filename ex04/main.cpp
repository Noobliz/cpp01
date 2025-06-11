
#include <iostream>
#include <fstream>
#include <string>


std::string replace_occ(const std::string &line, const std::string &s1, const std::string &s2){
	size_t start = 0;
	size_t pos;
	std::string result;
	if (s1.empty())
		return result;
	while ((pos = line.find(s1, start)) != std::string::npos){
		if (pos > line.size())
			break;
		result += line.substr(start, pos - start);
		result += s2;
		start += pos + s1.length();
	}
	if (start <= line.size())
		result += line.substr(start);
	return result;
}


int main (int argc, char **argv)
{

	if (argc != 4)
	{
		std::cerr << "expected input: ./replace <filename> <s1> <s2>" <<std::endl;
		return 1;
	}

	std::ifstream input(argv[1]);
	 if (!input.is_open()) {
        std::cerr << "Error: Cannot open input file: "<< argv[1] << std::endl;
        return 1;
    }

	std::string outFile = std::string(argv[1]) + ".replace";
	std::ofstream output(outFile.c_str());
    if (!output.is_open()) {
        std::cerr << "Error: Cannot create output file" << std::endl;
		input.close();
        return 1;
    }

	std::string result;
	while (std::getline(input, result)){
		output<<replace_occ(result, argv[2], argv[3]);
		if (!input.eof())
			output<<std::endl;
	}
	input.close();
	output.close();
	return 0;
}