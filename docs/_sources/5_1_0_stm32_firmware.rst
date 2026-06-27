STM32 Firmware
==============

Firmware update
~~~~~~~~~~~~~~~

.. note ::
    The recommended implementation workflow is PlatformIO. Use
    :doc:`1_1_1_platformio` for installation, build, and upload guidance.
    Legacy Makefile/container builds are documented only in
    :doc:`1_1_2_docker`.


To start using your **Multi-Protocol Programmer** as a PICO DAP, build the
firmware with the SDK workflow that matches your project. PlatformIO is
recommended for new projects. Legacy Makefile examples create a ``.bin`` file
inside the **build** folder.

WCHIspStudio
------------

Then open **WCHIspStudio** to upload the firmware

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/rp/wchispstudio.png" alt="WchispStudio" style="width: 100%;">
            <p>Settings WCHIspStudio</p>
        </div>

- In Object File 1 make sure to enter the correct path to the directory with the firmware.

- Make sure the "Automatic Download When Device Connect" option is enabled.

- To add the path you have to click on this bottom "..." and check.

.. warning ::
    Before connecting your Multi-Protocol Programmer, make sure to power it with +5V. You can do this by setting your switch to +5V.

- Push the Boot bottom and connect your **Multi-Protocol Programmer** to your computer.
- Wait until de firmware has finished updating your device.

**Done!** Now you can use your UNIT CH552 Multi-Protocol Programmer!

Create a new project in PlatformIO
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Installation
------------

Open Visual Studio Code, in the extensions menu, search PlatformIO:

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/platformio.png" alt="PlatformIO" style="width: 50%;">
            <p>PlatformIO extension in Visual Studio Code</p>
        </div>

And install the official version from PlatformIO:

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/plat_extension.png" alt="PlatformIO extension" style="width:100%;">
            <p>PlatformIO extension</p>
        </div>

In the Activity Bar, you will find the icon of your new extension in Visual Studio Code.

In the general menu, click on "Create New Project"

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/new_project.png" alt="New Project" style="width:50%;">
            <p>General menu</p>
        </div>

In the Quick Access menu, we can open an existing file for our STM32F4xx or create a new one:

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/quick_access.png" alt="Quick Access" style="width:100%;">
            <p>Quick Access menu</p>
        </div>

Next, in the Project Wizard:

- We will name our file.
- Select the specific model of our STM32F4xx board.
- Choose the framework (for this example, we will use CMSIS)
- Specify the location where we want to save the project.

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/project_wizard.png" alt="Project Wizard" style="width:90%;">
            <p>Project Wizard</p>
        </div>

Project
-------

Inside the generated project, you will find this project structure.

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/project_structure.png" alt="Project Structure" style="width:80%;">
            <p>Project structure</p>
        </div>

If you need to change your COM port, follow these steps:

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/upload_com.png" alt="Upload COM port" style="width:80%;">
            <p>New COM port</p>
        </div>

Inside the .ini file, make sure you have this configuration: 

.. code-block:: ini 

    [env:blackpill_f411ce]
    platform = ststm32
    board = blackpill_f411ce
    framework = cmsis
    upload_protocol = cmsis-dap
    debug_tool = cmsis-dap

.. note::
    If you are using a different board, change the "[env: ...]" and "board = ..." to match your board model. 

Here is a list of common STM32 microcontrollers and their corresponding
**board** identifiers used in PlatformIO's **platformio.ini** file.

.. list-table:: STM32 Microcontrollers
   :header-rows: 1

   * - Microcontroller / Board
     - PlatformIO board name
   * - STM32F103C8 (Blue Pill) 
     - ``bluepill_f103c8``
   * - STM32F401RE (Nucleo)
     - ``nucleo_f401re``
   * - STM32F446RE (Nucleo)
     - ``nucleo_f446re``
   * - STM32F103RB
     - ``genericSTM32F103RB``
   * - STM32F407VG (Discovery)
     - ``disco_f407vg`` 
   * - STM32F411CEU6 (Blackpill)
     - ``blackpill_f411ce``

Example
-------

The following example is a Blink using GPIOC (PC13) as an output.

.. code-block:: C

    #include "stm32f4xx.h"

    // Simple software delay loop
    void delay(volatile uint32_t t) {
        while (t--);
    }

    int main(void) {
        // 1. Enable the clock for GPIOC (required before accessing GPIOC registers)
        RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;

        // 2. Configure pin PC13 as general-purpose output (MODER13 = 0b01)
        GPIOC->MODER &= ~(0x3 << (13 * 2)); // Clear MODER13 bits
        GPIOC->MODER |=  (0x1 << (13 * 2)); // Set MODER13 to output mode

        // 3. Main loop
        while (1) {
            GPIOC->ODR ^= (1 << 13); // Toggle PC13 (invert LED state)
            delay(500000);           // Simple delay (not accurate, for testing purposes)
        }
    }

Flashing
--------

- Once you have your example ready to upload, just click on the PlatformIO icon on the Activity Bar.

- Select the "Upload" option.

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/stm/flashing.png" alt="Flashing" style="width:50%;">
            <p>Flashing</p>
        </div>

.. note ::
    To program a STM32F4xx, use the SWD protocol. For more information, check the pinout.

.. warning ::
    The STM32F4xx operates at 3.3V. Switch to 3.3V before connecting your device.
