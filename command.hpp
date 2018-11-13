#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <vector>
#include <string>

class command {
public:
	command();	// ctor
	~command();	// dtor
	
	// Main function. Fire and forget. Terminal feedback is not saved, but if
	// set to true, it will be printed on the screen.
	void exec(const char *terminal_cmd, bool realtime_terminal_feedback);
	
	// Overloaded main function. Takes two vector strings as arguments, as well
	// as printing to screen if set to true
	void exec(const char *terminal_cmd, std::vector<std::string> &terminal_feedback, std::vector<std::string> &error_list, bool realtime_terminal_feedback);
	
	// DEBUG FUNCTIONS
	void toggle_debug(m_debug = !m_debug);
	
private:
	bool m_debug;	// default FALSE. Toggle to true with debug_toggle()
};

#endif
