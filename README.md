# PythonCppAndReactTemplate &middot; [![GitHub license](https://badgen.net/badge/Lisence/MIT/blue)](https://github.com/ThierryBeaulieu/Chess/blob/master/LICENSE)

## Prerequisites

Welcome 👋 to this chess project! If you want to install this project, you can clone it on your computer with:

```bat
git clone https://github.com/ThierryBeaulieu/PythonCppAndReactTemplate
```

Before continuing, you will need to install a couple of prerequisites 📖. 

1. [Python 3](https://www.python.org/downloads/)
2. [CMake](https://cmake.org/install/)
3. [Node.js](https://nodejs.org/en/download/)

Once that this is done ✔️, you should good to go! You will now be able to proceed to the installation 🚀

## Installation

If you are on mac or linux, you should use the command:
```bat
PythonCppAndReactTemplate> npm install
```

Now that this is done ✔️, Flask's server will need dynamic libraries generated by C++ . You will need to generate those 🩹. For that, you will need to install [CMake](https://cmake.org/install/). For the beginners, CMake can be used to generate Visual Studio solutions (Windows) and projects for XCode (Mac). You can generate and build your project from the platform that you want. I recommend you to download the CMake GUI if possible (it makes things that much easier!).

If you are using the CMake GUI, you need to select as a root 🌳 :

```bat
PythonCppAndReactTemplate/
```

After that, you need to specify the location of the build folder 🏗️ (this can be anywhere on your computer, but I recommend you keep it somewhat close, as this is where the generated files will end up). Let's say:

```bat
PythonCppAndReactTemplate/build/
```
The dynamic libraries are in the folder ```build/server/cpplib/Debug```. There should be .exp, lib and .pyd files. Take those and manually place them in the folder ```PythonCppAndReactTemplate/build/server/cppBin/```. 

You should be good to go!

## Running the web application

To activate the server, use the command:

```bat
PythonCppAndReactTemplate> npm run server
```

To activate the client, user the command:

```bat
PythonCppAndReactTemplate> npm run client
```
You should be good to go!
