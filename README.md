# scan_all_ports

scans all ports on all hosts on a network provided by the user via args.

## Outline

* Main object runs sudo arp-scan --interface [$interface] --localnet to get a list of all IPs in the network

* Main object creates a vector of type "host" and creates an instance of the host type for each IP it finds, and begins to use nmap -Pn -O on each of the IPs, and stores this data in each host's member variables.

* Main object then prints all this data to the screen and/or writes it to a file.