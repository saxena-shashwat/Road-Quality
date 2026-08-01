# Road Quality Detection

A C-based system for detecting and analyzing road quality, surface roughness, and anomalies (such as bumps and potholes) using smartphone sensor data.

## Project Overview

This project processes inertial measurement unit (IMU) and accelerometer data collected from smartphone sensors to assess road surface quality. It includes mathematical utilities for signal processing, feature extraction, and linear algebra operations needed for sensor data analysis.

## Project Structure

```text
Road-Quality/
├── cmake/               # CMake helper scripts and modules
├── docs/                # Documentation
├── examples/            # Example usages and sample scripts
├── include/
│   └── cust/
│       └── basic.h      # Custom math definitions and complex number primitives
├── src/
│   ├── basic.c          # Complex math and signal processing implementations
│   └── main.c           # Application entry point
├── tests/               # Unit test suite
├── CMakeLists.txt       # CMake build configuration file
├── LICENSE              # MIT License
└── README.md            # Project README
```

## Prerequisites

- **C Compiler**: GCC, Clang, or MSVC supporting **C11**
- **Build System**: [CMake](https://cmake.org/) (v3.15 or higher)
- **Generator**: Ninja, Make, or Visual Studio MSBuild

## Building & Running

### 1. Configure the Project
Create the build files using CMake:
```bash
cmake -B build
```

### 2. Build the Application
Compile the project:
```bash
cmake --build build
```

### 3. Run the Executable
Execute the built binary:

- **Windows**:
  ```powershell
  .\build\RoadQuality.exe
  ```
- **Linux / macOS**:
  ```bash
  ./build/RoadQuality
  ```

## License

This project is licensed under the [MIT License](LICENSE).
