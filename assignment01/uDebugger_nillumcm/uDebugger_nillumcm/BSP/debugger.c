#include <stdint.h>
#include "print.h"

/*
 *
 * Part of a fault exception handler. Prints the given register values.
 * pc: the value of the program counter when the fault occurred.
 * lr: the value of the link register when the fault occurred.
 *
 */
void FaultPrint(uint32_t pc, uint32_t lr)
{
    // TODO: Print an error message specifying the PC and LR values when the fault occurred
    // <Your code here>
  PrintString("The error occured with PC value of 0x");
  PrintHex(pc);
  PrintString(" and a LR value of 0x");
  PrintHex(lr);
  PrintString(".\n");
}
