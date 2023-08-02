# GPR5300 - ComputerGraphics - RenderScene

This project was done at the SAE Institute Geneva during the GPR5300-ComputerGraphics module.
It is one of the scenes done after learning [OpenGL](https://www.opengl.org/) and its creation 
is resumed in my blogpost that you can find [here](https://sstyles93.github.io/).

# The original project with all steps is [HERE](https://github.com/SStyles93/opengl-scene) !

[Folders](#folders) | [Folder content](#folder-content) |  
----- | -----
[Data](#data) - [Include](#include) - [Main](#main) - [Src](#src) |  [Main](#pr-main) - [Include](#pr-include) - [Source](#pr-source)


## Folders

-	<h4 id="data"><a href="https://github.com/SStyles93/opengl-scene/tree/main/data">Data</a></h4>  
	Contains the shaders used for the project. You can download the textures and objects 
 [here](https://drive.google.com/drive/u/0/folders/1r60pUaqA7q4aLQIBk-h2yQ0TdRas9ExQ).	

-	<h4 id="include"><a href="https://github.com/SStyles93/opengl-scene/tree/main/include">Include</a></h4>  
	Contains all the header files

-	<h4 id="main"><a href="https://github.com/SStyles93/opengl-scene/tree/main/main">Main</a></h4>  
	Contains all the Scenes that illustrate the different steps of OpenGL

-	<h4 id="src"><a href="https://github.com/SStyles93/opengl-scene/tree/main/src">Src</a></h4>  
	Contains all the .cpp files

## Folder content

<details>
<summary> <h3 id="pr-main"> Main </h3> </summary>
	<p>         

-	[RenderScene](https://github.com/SStyles93/GPR5300_OpenGL/blob/main/main/RenderScene.cpp)  
	All elements implementated in [opengl-scene](https://github.com/SStyles93/opengl-scene).

	</p>
</details>

<details>
<summary> <h3 id="pr-include"> Include </h3> </summary>
	<p> 

-	[bloom.h](https://github.com/SStyles93/opengl-scene/blob/main/include/bloom.h)  
	The include file with the class used for bloom effect, uses Narkowicz ACES tone mapping.

-	[camera.h](https://github.com/SStyles93/opengl-scene/blob/main/include/camera.h)  
	The camera class header file.

-	[engine.h](https://github.com/SStyles93/opengl-scene/blob/main/include/engine.h)  
	The engine class header file.

-	[file_utility.h](https://github.com/SStyles93/opengl-scene/blob/main/include/file_utility.h)  
	File loading utility.

-	[mesh.h](https://github.com/SStyles93/opengl-scene/blob/main/include/mesh.h)  
  	The mesh class header file.

-	[model.h](https://github.com/SStyles93/opengl-scene/blob/main/include/model.h)  
	The model class header file.

-	[object.h](https://github.com/SStyles93/opengl-scene/blob/main/include/object.h)  
	The object class header file.

-	[pipeline.h](https://github.com/SStyles93/opengl-scene/blob/main/include/object.h)  
	The pipeline class header file.

-	[scene.h](https://github.com/SStyles93/opengl-scene/blob/main/include/scene.h)  
	The scene class header file

-	[settings.h](https://github.com/SStyles93/opengl-scene/blob/main/include/settings.h)  
	The general settings used for the project

	</p>
</details>

<details>
<summary> <h3 id="pr-source"> Source </h3> </summary>
	<p>  

-	[camera.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/camera.cpp)  
	The camera class source file.

-	[engine.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/engine.cpp)  
	The engine class source file.

-	[file_utility.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/file_utility.cpp)  
	The file utility class source file.

-	[mesh.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/mesh.cpp)  
	The mesh class source file.

-	[model.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/model.cpp)  
	The model class source file.

-	[object.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/object.cpp)  
	The object class source file.

-	[pipeline.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/pipeline.cpp)  
	The pipeline class source file.

-	[scene.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/scene.cpp)  
	The scene class source file.

-	[stb_image.cpp](https://github.com/SStyles93/opengl-scene/blob/main/src/stb_image.cpp)  
	Implementation of the stb_image library.

	</p>
</details>


Note that this project was built using [CMake](https://cmake.org/) and [VCPKG](https://vcpkg.io/en/).

