#include "command.hpp"
#include "host.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

command cmd;

int main(int argc, char *argv[]) {
	cmd.toggle_debug();
	vector<string> arp_scan_return;
	vector<string> error_list;
	if (argc == 1)
		cmd.exec("sudo arp-scan --localnet", arp_scan_return, error_list);
	else if (argc > 1) {
		string command_string = "sudo arp-scan --interface ";
		string interface = argv[1];
		command_string = command_string + interface + " --localnet";
		cmd.exec(command_string.c_str(), arp_scan_return, error_list);
	}
	if (arp_scan_return.size() > 0) {
		for (int i = 0; i < arp_scan_return.size(); i++) {
			cout << arp_scan_return[i];
		}
	}
	else
		cout << "arp-scan returned nothing! Check your shit!" << endl;
	return 0;
}