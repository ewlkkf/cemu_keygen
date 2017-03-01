# cemu_kg
Cemu registration file generator.

Run on a fresh install to build serial.bin and settings.bin.
Run once every 6-12 hours to keep online checks at bay.

Back up serial.bin and settings.bin if you have a legit install if you wanna mess with this.

keygen_loader.cpp is a loader. It simply generates a fresh/updated settings/serial.bin whenever you run it.
Use it instead of Cemu.exe to run the emulator. Running this removes the need to run every 12 hours the keygen,
since the loader updates the serial on demand. 

There are 2 variants of the serial algorithm, one with a simple HWID system and another with much more complex
checks and including various forms of obfuscation, which involved some time deobfuscating and rewriting code.

Works up to 1.7.2c. This loader/keygen might be worthless now for the time being, but I found it fun REing it.
Might work on reverse engineering it more when I feel like.

