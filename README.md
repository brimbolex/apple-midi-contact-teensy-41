# apple-midi-contact-teensy-41
teensy 4.1 communicatiing over apple midi via ethernet.

connect up to 3 Teensy 4.1 to a 4th teensy 4.1 to send trigger inputs via midi note on to usb on the host.
the host teensy will be seen as an 4 channel generic midi interface.
enter the mac adresses and give valid ip manually in the code. then the clients will connect automatically on startup.
each client is capable of 27 trigger contacts running from c-2 ++
An RGB diode will give you overview about the connectionstatus.

When setting up be aware getting the host online bevore powering on the clients.
on connection loss you need to stick again to the powering up rutine.
