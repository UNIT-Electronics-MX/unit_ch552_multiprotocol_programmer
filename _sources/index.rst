.. STM32 Getting Started documentation master file, created by
   sphinx-quickstart on Thu Mar 13 11:22:00 2025.

Multi-Protocol Programmer  
=============================================

.. note::

   This documentation is actively evolving. For the latest updates and revisions,
   please visit the project's GitHub repository.


**Multi-Protocol Programmer**

The **USB Multi-Protocol Programmer** is a compact and cost-effective device designed for embedded systems development, testing, and debugging. It supports multiple hardware architectures including **AVR**, **ARM Cortex-M (CMSIS-DAP)**, and **CPLD (MAX II)**, making it ideal for a wide range of applications such as firmware development, educational labs, and low-volume production environments.

This programmer is built around the **CH552 microcontroller**, which is based on the enhanced **8051 architecture**. It offers native USB support and a range of digital interfaces (GPIO, SPI, I2C, UART), enabling seamless communication between the host system and the target hardware.


**Microcontroller Core**

The programmer integrates a **CH552 microcontroller** with the following characteristics:

* 8051-based enhanced core, up to 24 MHz.
* Native USB 2.0 Full-Speed device.
* Multiple GPIO pins for signal control and mapping.
* SPI, I2C, and UART interfaces for protocol bridging.
* Low power consumption and small form factor.


**Features**

* **Multi-architecture support**: Compatible with AVR (ISP), ARM Cortex-M (CMSIS-DAP), and CPLD (JTAG).
* **In-System Programming (ISP)**: Flash microcontrollers without desoldering.
* **Real-time debugging**: Step-through and breakpoint debugging with OpenOCD and PyOCD.
* **JTAG boundary-scan**: For CPLD configuration and board testing.
* **Configurable GPIOs**: Adaptable for use as JTAG, SWD, or ISP lines.
* **USB 2.0 interface**: Direct connection to host PC using USB CDC or HID.
* **Toolchain compatibility**: Works with avrdude, OpenOCD, PyOCD, urJTAG, and others.
* **Cross-platform support**: Compatible with Linux and partially supported on Windows.


**Advantages**

* **Compact design**: Suitable for breadboards and embedded setups.
* **Versatility**: One device for multiple programming and debugging protocols.
* **Open-source firmware**: Fully customizable and community-supported.
* **Cost-effective**: Inexpensive alternative to commercial debuggers and programmers.
* **Linux-friendly**: No need for proprietary drivers on Linux systems.
* **Ideal for education**: Can be used in microcontroller courses and workshops.

**Limitations**

* **External power required**: Cannot supply power to high-current target boards.
* **Learning curve**: Requires knowledge of protocols like CMSIS-DAP, JTAG, or AVR ISP.
* **Firmware updates**: May require reflashing to support new features or targets.
* **Partial Windows support**: Some tools may require manual setup or driver adjustments.

**Compatibility**

**CMSIS-DAP (ARM Cortex-M)**

* Compatible with CMSIS-DAP v2.0 protocol.
* Supported by OpenOCD and PyOCD.
* Tested with:

  * STM32F0
  * RP2040 (Raspberry Pi Pico)
  * PY32 series
  * Other Cortex-M0/M3/M4 devices

**AVR ISP**

* Works with avrdude using USBasp-like interface.
* Supports:

  * ATmega328P
  * ATtiny85
  * ATmega2560
  * Other classic 8-bit AVR microcontrollers

**CPLD JTAG**

* Supports Intel (formerly Altera) MAX II series.
* Compatible with JTAG tools like urJTAG or openFPGALoader.
* JTAG signals exposed via GPIO (TDI, TDO, TCK, TMS).


**Use Cases**

* Firmware flashing and in-system programming.
* Debugging embedded applications with CMSIS-DAP.
* Educational labs and training environments.
* Low-cost production line programming.
* Boundary-scan tests for hardware bring-up.
* CPLD configuration and prototyping.


**Resources**

* Firmware: [https://github.com/wagiminator/CH552-DAPLink](https://github.com/wagiminator/CH552-DAPLink)
* CH552 Datasheet: Available from WCH official website.
* Tools:

  * OpenOCD, PyOCD
  * avrdude

* Community support: GitHub issues, Reddit, Hackaday, forums.





.. toctree::
   :maxdepth: 2
   :caption: Contents

   1_0_0_terms
   1_1_0_sdk
   1_1_1_platformio
   1_1_2_docker
   1_2_0_about
   2_0_0_started
   2_1_0_avr_firmware
   2_2_0_started
   2_3_0_ide
   3_0_0_arm
   3_1_0_openocd 
   4_0_0_rp2040
   4_1_0_rp_firmware
   5_0_0_stm32
   5_1_0_stm32_firmware
   7_0_0_cpld
   7_1_0_cpld_firmware
   
   report
   
   



