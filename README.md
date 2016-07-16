- Download .deb: https://github.com/jcgomes/theme-installer/blob/master/release/theme-installer-all.deb?raw=true
- Download portable version:https://github.com/jcgomes/theme-installer/blob/master/release/theme-installer-portable.tar.gz?raw=true

# General information
This application helps to install themes and icons on Linux.

The file must be in ".tgz" or ".tar.gz" format, ready to be extracted in the folder "/usr/share/icons" and/or "/usr/share/themes", just like in the manual process.

An example the basic internal structure of .tar.gz file to the icon theme:
- IconFolderName	[folder]
	+ actions 	[folder]
	+ apps 		[folder]
	+ categories 	[folder]
	+ devices 	[folder]
	+ emblems 	[folder]
	+ emotes 	[folder]
	+ mimetypes 	[folder]
	+ places 	[folder]
	+ status 	[folder]
	+ index.theme 	[file  ]

# Portable version
Extract downloaded file as sudo in user root directory "/"

Example: 

- Open a terminal in the same folder as "theme-installer-portable.tar.gz" file downloaded
- Type: sudo tar -zxvf theme-installer-portable.tar.gz -C /

Now, check your menu, it must be there

# Developers
Feel free to contribute or fork this project, just don't forget to quote me.

# TODO List
- Transtation to all languages
- Execute application with sudo without terminal needs (sudo login by c++ code, not by shortcut.desktop)

----------------
Best regards

Juliano C. Gomes
