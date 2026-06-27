AVR Firmware Overview
=====================

The CH552 Multi-Protocol Programmer relies on the PICO-AVR firmware for correct operation. This firmware, designed to run on CH55x microcontrollers, transforms the CH552 into a versatile USB-to-ISP bridge. It supports ISP AVR programming protocol,  making it compatible with a wide range of AVR devices.

The programmer integrates seamlessly with development environments such as the Arduino IDE. It can be selected under Tools → Programmer as either USBasp or a custom driver name, allowing for easy bootloader installation and firmware updates on AVR microcontrollers like the ATmega328P.


.. warning::

    The PICO-AVR firmware is available under the
    `Creative Commons Attribution-ShareAlike 3.0 Unported License <http://creativecommons.org/licenses/by-sa/3.0/>`_.

    Additional resources:

    - Github: `wagiminator <https://github.com/wagiminator>`_
    - EasyEDA: `wagiminator at EasyEDA <https://easyeda.com/wagiminator>`_
    - License details: `Creative Commons Attribution-ShareAlike 3.0 Unported License <http://creativecommons.org/licenses/by-sa/3.0/>`_




Firmware Update Procedure
~~~~~~~~~~~~~~~~~~~~~~~~~

.. note::

    The recommended implementation workflow is PlatformIO. Use
    :doc:`1_1_1_platformio` for installation, build, and upload guidance.
    Legacy Makefile/container builds are documented only in
    :doc:`1_1_2_docker`.


To use the **Multi-Protocol Programmer** in PICO ASP mode, build the firmware
with the SDK workflow that matches your project. PlatformIO is recommended for
new projects. Legacy Makefile examples generate a ``.bin`` file inside the
project **build** directory.

WCHIspStudio Interface
----------------------

Launch **WCHIspStudio** to upload the firmware.

.. raw:: html

    <div style="text-align: center;">
         <img src="./_static/rp/wchispstudio.png" alt="WCHIspStudio" style="width: 100%;">
         <p>WCHIspStudio Configuration</p>
    </div>

- In the Object File 1 field, select the path to the generated .bin firmware file.
- Enable the option "Automatic Download When Device Connect".
- Click the ... button to browse and confirm the correct firmware path.

.. warning::

    Before connecting the CH552 programmer, **ensure the device is powered with +5V**. Use the onboard switch to select the appropriate voltage.

- Press the Boot button and connect your **Multi-Protocol Programmer** to the computer.
- Await the completion of the firmware update process.

**Completion Notice:** The firmware has been successfully updated, and the **UNIT CH552 Multi-Protocol Programmer** is now ready for use.

Resources
---------

1. `EasyEDA Design Files <https://oshwlab.com/wagiminator>`_
2. `WCH: CH552 Datasheet <http://www.wch-ic.com/downloads/CH552DS1_PDF.html>`_
3. `SDCC Compiler <https://sdcc.sourceforge.net/>`_
4. `Blinkinlabs: CH55x SDK for SDCC <https://github.com/Blinkinlabs/ch554_sdcc>`_
5. `Thomas Fischl: USBasp <https://www.fischl.de/usbasp/>`_
6. `Ralph Doncaster: USBasp <https://github.com/nerdralph/usbasp>`_
7. `Deqing Sun: CH55xduino <https://github.com/DeqingSun/ch55xduino>`_
