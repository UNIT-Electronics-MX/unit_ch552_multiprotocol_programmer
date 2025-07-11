CPLD Firmware
=============

Firmware update
~~~~~~~~~~~~~~~

.. warning::

    This firmware is a third-party implementation and **is not affiliated with or endorsed by Altera or Intel**. It is intended for educational, development, prototyping, and other lawful purposes only.

    Ensure that you comply with all applicable laws and regulations when using this firmware. **Use is at your own risk.** The user assumes all responsibility for any consequences, including potential legal implications. The author and distributor of this firmware **are not liable** for any damage, misuse, or legal issues arising from its use.

    **Proceed with caution and discretion.**

.. note ::
    The contents of this chapter are hosted in the unit_ch55x_docker_sdk.git repository. 
    Always remember to keep Docker Desktop open in your computer; otherwise, the commands will not work properly.


To start using your **Multi-Protocol Programmer** as a CPLD/FPGA programmer, follow these steps:

.. code-block:: bash

   cd examples/USB/Prog/CPLD/src

In that directory, open **descriptor.h** inside that file, change lines 13 and 14 of the code as shown below:

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/cpld/firmware_cpld.png" alt="Configuration" style="width: 80%;">
            <p> Initial configuration</p>
        </div>

Only change the **zeros** for **ones**

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/cpld/new_descriptor.png" alt="Configuration" style="width: 75%;">
            <p> New configuration</p>
        </div>

Once you've changed this data, run the following command in your terminal:

Linux
-----

.. code-block:: bash

   ./spkg/spkg -p ./examples/USB/Prog/CPLD

Windows
-------

.. code-block:: bash

   ./spkg/spkg.bat -p ./examples/USB/Prog/CPLD

The command creates a .bin file inside the **build** folder.
Then open **WCHIspStudio** to upload the firmware

.. raw:: html

        <div style="text-align: center;">
            <img src="./_static/cpld/wchispstudio.png" alt="WchispStudio" style="width: 100%;">
            <p>Settings WCHIspStudio</p>
        </div>

- In Object File 1 make sure to enter the correct path to the directory with the firmware.

- Make sure the "Automatic Download When Device Connect" option is enabled.

- To add the path you have to click on this bottom "..." and check.

.. note ::
    Before connecting your Multi-Protocol Programmer, make sure to power it with +5V. You can do this by setting your switch to +5V.

- Push the Boot bottom and connect your **Multi-Protocol Programmer** to your computer.
- Wait until de firmware has finished updating your device.

**Done!** Now you can use your UNIT CH552 Multi-Protocol Programmer!

.. note ::
    To program an FPGA and a CPLD, use the JTAG Protocol. For more information, check the pinout.




