/*
	Copyright(c) 2022 Tyler Crockett | Macdaddy4sure.com

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissionsand
	limitations under the License.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <io.h>
#include <fcntl.h>
#include <sstream>
#include <mysql.h>
#include <chrono>

using namespace std;
using namespace filesystem;

class _WikiParser
{
public:
	static void Parser();
	//static string GetLastFile();
	static void Settings();
	static void MySQL(string table, string header, string sub_header, string sub_sub_header, string sub_sub_sub_header, string wiki_text);
	static void SaveToFile(string title, int number);
	static string ReplaceSpaces(string title);
	static string removeQuotes(string query);
	static string ToLowercase(string sentence);
	static string fixCharacterSyntax(string input);
	//static bool invalidChar(char c);
	//static void stripUnicode(string& str);
	//static void Rename(string temp_path, string title);
	//static bool MySQL2(wstring table);
	static long CountFiles();
	static bool Check_Present(string new_title);
	static int getRange();
	//static void LoadSettings();
	//static void SaveSettings();
};

static string mysql_hostname = "localhost";
static string mysql_username = "root";
static string mysql_password = "Anaheim92801%";
static string mysql_database = "wikipedia";
static string mysql_location = "D:/_Downloads/wikipedia/Done/";