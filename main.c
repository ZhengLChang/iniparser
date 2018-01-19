#include "iniparser.h"
#include "dictionary.h"
#include <stdio.h>

int main(int argc, char **argv)
{
//	dictionary *ini = iniparser_load("/root/disk4/AX/A6x/doc/common/configuration/Network/Wan.cfg");
	dictionary *ini = iniparser_load(argv[1]);
	/*
	dictionary_dump(ini, stdout);
	*/
	dictionary_report_dump(ini, stdout);
	iniparser_freedict(ini);
#if 0
	dictionary *ini =  dictionary_new(0) ;
	iniparser_set(ini, "Love:zhenghuijie", "3");
	iniparser_set(ini, "Love:and", "5");
	iniparser_set(ini, "Love:zhengjin", "7");
	iniparser_dump_ini(ini, stdout);
#endif
	return 0;
}

