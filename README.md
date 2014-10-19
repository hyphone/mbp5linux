__mbp5linux scripts__

These scripts make it possible to switch between the integrated and dedicated GPU on the MacBook Pro 5 and 6 models (with a 9400M and 9600M GT).

The scripts and executables are tested on Fedora 20, openSUSE 13.1 and ARCH on a MacBook Pro 5,1 (late 2008). They should run on any distribution that fullfills the following requirements.

This package contains 2 executables and 2 services to switch the Apple GMUX at boot and refresh the settings at resume from standby / hibernation.
Additionally I changed the source from macfanctld to watch the temperatures from the CPU and GPUs DIEs instead of the proximity temperatures because i realized my CPU for example often just stays at 105°C without the fans spinning up for a while and I got a lot of MCE error messages (yes i resetted the SMC and everything). With the modded macfanctld and new settings the fans come up quite quickly. If you think it's annoying and your CPU is cool enough and does not overheat skip the step enabling macfanctld.

__requirements__
* propriatary NVIDIA drivers
* systemd
* graphical.target as default (default on i guess every desktop-centric distro)

__installation__

* open terminal
* # git clone https://github.com/hyphone/mbp5linux.git
* # cd mbp5linux
* sudo cp -r ./bin/* /bin
* sudo cp -r ./etc/* /etc
* sudo cp -r ./sbin/* /sbin
* sudo gpuchange (to initialize the script for the first time)
* sudo systemctl enable macfanctld
* sudo systemctl enable gpuboot
* sudo systemctl enable gpuresume
* reboot

__comfortable usage__
* use my GNOME 3 shell extension to switch the GPU from the GUI
https://github.com/hyphone/mbpgpuswitcher-shell-extension

__usage__
* run gpuchange with root previleges to set a flag to change the GPU on the next boot
* you can run gpuchange i or gpuchange d to specify the GPU you want to use

