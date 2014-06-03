#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>

using namespace std;

int main(int argc, char* argv[])
{
    // ===========================================
    std::string helpmsg = R"raweos(
Description:
Reads a file byte by byte and print each byte as an int (from 0 to 255)

Usage:
bin2int FILE

Args:
FILE    the file you want to read
-h      print this help message
    )raweos";
    // ===========================================

    if(string(argv[1]) == "-h" or string(argv[1]) == "--help") {
        cout << helpmsg << "\n";
        exit(0);
    }

    using namespace boost::filesystem;
    off_t f_size = file_size(argv[1]);
    ifstream fh(argv[1], ios_base::binary);
    unsigned char b;
    for (off_t i = 0; i < f_size; i++) {
        b = fh.get();
        cout << i << " \t" << (int)b << "\n";
    }

    return 0;
}

