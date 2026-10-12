# Sistema de gestión de análisis de laboratorio

Aplicación de consola en C++ para administrar un catálogo de análisis y sus
registros de detalle. La interfaz utiliza menús de teclado y guarda la
información en archivos locales.

## Funcionalidades

- **Análisis:** agregar, consultar por código, descripción o costo, modificar
  descripción, condiciones y costo, y eliminar.
- **Detalle de registro de pruebas:** agregar un detalle asociado a un análisis,
  consultar por número o código de análisis, modificar el costo y eliminar.
- **Persistencia local:** carga los registros al iniciar y los escribe al salir
  de la aplicación.

Los códigos de análisis y números de detalle se generan automáticamente. Al
crear un detalle, se selecciona un análisis existente y se copian sus datos al
registro.

## Requisitos

- Windows; el proyecto usa `windows.h`, `conio.h` y funciones de consola de
  Windows.
- Dev-C++/MinGW u otro entorno compatible con el código y las bibliotecas
  anteriores.
- Los archivos de datos requeridos en el directorio de trabajo (ver
  [Archivos de datos](#archivos-de-datos)).

## Compilar y ejecutar

### Con Dev-C++

1. Abra `ProyectoFinalDef-182006.dev` en Dev-C++.
2. Compile el proyecto.
3. Ejecute `ProyectoFinalDef-182006.exe` con el directorio de trabajo situado en
   la carpeta del proyecto, donde están los archivos de datos.

El proyecto también incluye `Makefile.win`, preparado para `g++.exe`. Si tiene
GNU Make y MinGW configurados en Windows, desde la carpeta del proyecto puede
intentar compilar con:

```console
mingw32-make -f Makefile.win
```

La aplicación espera que `Analisis.xls` y `DetalleRegistroPruebas.xls` estén en
el directorio de trabajo al iniciarse. Si no puede abrirlos, termina con un
mensaje de error. Para ejecutarla desde PowerShell en la carpeta del proyecto:

```powershell
.\ProyectoFinalDef-182006.exe
```

En los menús, use las flechas **arriba/abajo** para seleccionar una opción y
presione **Enter** para confirmarla.

## Archivos de datos

Aunque algunos archivos tienen extensión `.xls`, los que usa esta aplicación
son archivos de texto plano separados por tabuladores; no son libros de Excel.
Los registros están separados por líneas.

| Archivo | Contenido |
| --- | --- |
| `Analisis.xls` | Código, descripción, condiciones, costo. |
| `DetalleRegistroPruebas.xls` | Número de detalle, código de análisis, descripción, condiciones, costo. |

La aplicación lee estos dos archivos al iniciar y los reescribe al salir.
Mantenga una copia de respaldo antes de editar los datos manualmente. Los otros
archivos `.xls` incluidos (`Informacion.xls`, `EstructuraPaciente.xls` y
`RegistroPruebas.xls`) no se cargan en el flujo principal.

## Estructura del proyecto

| Archivo | Responsabilidad |
| --- | --- |
| `main.cpp` | Punto de entrada: muestra la portada, carga los datos y abre el menú principal. |
| `librerias.h` | Bibliotecas, estructuras globales e inclusiones de los módulos. |
| `menu.h` | Menús y navegación por teclado. |
| `registroestruct.h` | Operaciones de consulta, alta, modificación, eliminación y carga/guardado de registros. |
| `manipular.h` | Interacción de las operaciones con el usuario. |
| `validaciones.h` | Lectura y validación de entradas. |
| `estructuras.h` | Impresión de los registros cargados. |
| `decorar.h`, `portada.txt` | Presentación de consola y portada. |
| `Makefile.win`, `ProyectoFinalDef-182006.dev` | Configuración de compilación para Dev-C++/MinGW. |

## Limitaciones conocidas

- Los registros se mantienen en arreglos con capacidad fija de 50 análisis y 50
  detalles.
- Los datos se guardan en archivos de texto delimitados por tabuladores; no hay
  base de datos ni importación/exportación real de Excel.
- La rutina que guarda los detalles escribe un formato incorrecto para el
  costo, por lo que puede dejar `DetalleRegistroPruebas.xls` ilegible después
  de salir. Respalde ese archivo antes de usar las opciones de modificación o
  eliminación.
- La navegación y la presentación dependen de la consola de Windows, por lo que
  el programa no es portable tal cual a Linux o macOS.
- No se incluyen pruebas automatizadas.
