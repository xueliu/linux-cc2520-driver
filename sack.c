

#include "cc2520.h"

// Context: process
void cc2520_sack_tx()
{
	// send the packet
	// setup hr_timer
	cc2520_interface_write_cb(0);
}

// Context: interrupt
void cc2520_sack_rx()
{

}