# ED2 — Advanced Sorting — List 04

# Practical Assignment - Advanced Sorting Algorithms (C++)

Practice exercises for Data Structures II — Advanced sorting algorithms (Merge Sort, Quick Sort, Quickselect) and partitioning schemes (Lomuto, Hoare).

## 📂 Repository Structure

The project uses **CMake** as its build system, standardizing the compilation for any operating system or modern IDE. All source code is centralized in the `src/` directory:

```
ed2-advanced-sorting-list04-cpp/
├── .gitignore
├── CMakeLists.txt
├── README.md
└── src/
    ├── Exer01_MergeSortCountInversions.cpp
    ├── Exer02_StabilityMergeSortVsQuickSort.cpp
    ├── Exer03_QuickselectLomutoKthLargest.cpp
    └── Exer04_HoarePartitionParitySort.cpp
```
---

## ⚙️ Prerequisites

* Recommended IDE: CLion (JetBrains) or Visual Studio Code with the CMake Tools extension.

* Tools: CMake (version 3.10 or higher) and a modern C++ compiler (GCC, MinGW, or Clang).

---

## 🚀 How to Compile and Run

The CMakeLists.txt architecture is configured to generate an independent executable for each exercise.

### Option A: Using CLion (Graphical Interface)

1. Clone this repository to your local machine:
   ```bash
   git clone <https://github.com/MateusTeodoro/ed2-advanced-sorting-list04-cpp.git>

2. Open CLion and select Open. Navigate to the project's root folder (ed2-sorting-list03-cpp) and click OK.

3. CLion will read the CMakeLists.txt and load the project automatically.

4. In the top right corner, locate the Run Configurations dropdown menu (next to the green Play button).

5. Select the executable for the exercise you want to test (e.g., Exer01_BubbleSortCountSwaps).

6. Click the Play button (Shift + F10) to run the code. The integrated terminal will open at the bottom of the screen.

---

### Option B: Using the Terminal (Via CMake)

If the reviewer prefers to run the code via the command line:

1. At the project root, create a build folder and navigate into it:

```
mkdir build && cd build
```

2. Generate the build files:

```
cmake ..
```

3. Compile all exercises at once:

```
cmake --build .
```

4. Run the desired program (example for Linux/Mac):

```
./Exer01_MergeSortCountInversions
```

(On Windows, use .\Exer01_BubbleSortCountSwaps.exe)

---
