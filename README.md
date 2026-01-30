# CI/CD Automated Pipeline for C++ (macOS)

## Project Overview
This project demonstrates the implementation of a Continuous Integration (CI) pipeline for a C++ application. It focuses on automating the software development lifecycle, from build configuration to automated testing and reporting.

## Key Technologies
* **CI/CD:** Jenkins (Pipeline-as-Code via `Jenkinsfile`)
* **Build System:** CMake & GNU Make
* **Testing Framework:** GoogleTest (GTest)
* **Environment:** macOS
* **Languages:** C++ (Core logic), Python, and Makefile

## Features
* **Automated Builds:** Seamless compilation using CMake and Makefile setup.
* **Unit Testing:** Integrated GoogleTest suite to ensure code reliability.
* **Pipeline Automation:** Automated workspace cleanup and build execution defined in a `Jenkinsfile`.
* **Artifacts & Reporting:** Generation of XML test reports (`test_report.xml`) for status monitoring.

## Project Structure
* `Jenkinsfile` — Defines the automation pipeline stages.
* `CMakeLists.txt` — Build system configuration.
* `tests/` — Directory containing GoogleTest cases.
* `src/` — Source code of the application.
* `_deps/` — Managed project dependencies including GoogleTest builds.
* `build/` — Build artifacts including object files and test executables.
./student_system
