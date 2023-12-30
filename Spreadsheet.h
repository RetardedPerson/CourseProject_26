#include "Node.h"

struct Spreadsheet
{
	string tableName;
	Node* list;
	int biggestId = 0;
};