- Download .deb: https://github.com/jcgomes/theme-installer/blob/master/release/theme-installer-v0.2-all.deb?raw=true
- Download portable version: https://github.com/jcgomes/theme-installer/blob/master/release/theme-installer-v0.2-portable.tar.gz?raw=true

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

# Screenshots (user guide)
![Open Theme Installer by Menu](https://github.com/jcgomes/theme-installer/blob/master/screenshots/01.jpg) 

![Type sudo password](https://github.com/jcgomes/theme-installer/blob/master/screenshots/02.jpg)

![Theme installer main screen](https://github.com/jcgomes/theme-installer/blob/master/screenshots/03-a.jpg)

![Finding a theme or icon file to install](https://github.com/jcgomes/theme-installer/blob/master/screenshots/04.jpg)

![All done](https://github.com/jcgomes/theme-installer/blob/master/screenshots/05.jpg)


----------------
Best regards

Juliano C. Gomes
