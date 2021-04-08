#include "include/parser.h"

int main(int argc, char* argv[]) {
    char jsonString[] = "{'name': 'Patrick', 'age': 56, 'misc': 'knife'}";
    parse(jsonString);
    return 0;
}
