#ifndef HOST_HPP
#define HOST_HPP

#include <iostream>
#include <string>
#include <vector>

class host {
public:
	host();		// ctor
	~host();	// dtor
	void convert_and_set_ip_address(std::string address);
	void convert_and_populate_open_ports(std::vector<std::string>ports);
	
private:
	int m_ip_address[4];
	std::vector<int> m_open_ports;
	std::vector<std::string>m_operating_system_estimate;
};

void host::convert_and_set_ip_address(std::string address) {
	
}

void host::convert_and_populate_open_ports(std::vector<std::string>ports) {
	
}
#endif