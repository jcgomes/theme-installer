Download .deb: 
Download portable version:

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
Extract this file as sudo in user root directory "/"

Example: 

1) Open a terminal in the same folder as "theme-installer-portable.tar.gz" file downloaded
2) type: sudo tar -zxvf theme-installer-portable.tar.gz -C /

Now, check your menu, it must be there

# Developers
Feel free to contribute or fork this project, just don't forget to quote me.

# TODO List
- Transtation to all languages
- Execute application with sudo without terminal needs (sudo login by c++ code, not by shortcut.desktop)

