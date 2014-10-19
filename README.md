__mbp5linux scripts__

These scripts make it possible to switch between the integrated and dedicated GPU on the MacBook Pro 5 and 6 models (with a 9400M and 9600M GT).

The scripts and executables are tested on Fedora 20, openSUSE 13.1 and ARCH on a MacBook Pro 5,1 (late 2008). They should run on any distribution that fullfills the following requirements.

__requirements__
* propriatary NVIDIA drivers
* systemd
* graphical.target as default (default on i guess every desktop-centric distro)

__installation__

* open terminal
* # git clone THIS REPO
* # cd THIS REPO
* sudo cp -r ./bin/* /bin
* sudo cp -r ./etc/* /etc
* sudo cp -r ./sbin/* /sbin
* sudo gpuchange (to initialize the script for the first time)

__comfortable usage__
* use my GNOME 3 shell extension to switch the GPU from the GUI
https://github.com/hyphone/mbpgpuswitcher-shell-extension

__usage__
* run gpuchange with root previleges to set a flag to change the GPU on the next boot
* you can run gpuchange i or gpuchange d to specify the GPU you want to use