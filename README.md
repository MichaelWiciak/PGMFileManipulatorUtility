# PGM Image Processing Tools

## Overview

This collection of C programs is designed for manipulating **PGM (Portable Gray Map)** image files. The tools provide functionalities for converting between ASCII and binary PGM formats, reducing the image size, and dividing images into smaller tiles. Each program reads input from a PGM file, performs the desired operation, and outputs a new modified PGM file.

## Programs

### 1. **pgmReduce.c**

**Purpose**:  
This program reduces the size of a PGM image by a given factor, effectively resizing the image.

**How it works**:
- The input image is read and validated.
- The program calculates new dimensions based on the reduction factor provided by the user.
- It writes the reduced image into a new file, adjusting the width and height accordingly.

**Why use it**:  
This tool is useful when you need to downscale an image, either for faster processing or to meet specific size requirements.

---

### 2. **pgmTile.c**

**Purpose**:  
This program divides a PGM image into smaller tiles of equal size, based on a given factor.

**How it works**:
- The input image is read, and its size is divided into equal parts based on the factor.
- Each tile is saved as a separate file, representing a section of the original image.

**Why use it**:  
If you want to split a large image into smaller parts for separate analysis or processing, this tool can efficiently handle the task.

---

### 3. **pgma2b.c**

**Purpose**:  
This program converts an **ASCII PGM** file to a **binary PGM** file.

**How it works**:
- The input image is read in ASCII format.
- The program validates the image and switches the magic number to indicate a binary PGM.
- The pixel data is then written in binary format to the output file.

**Why use it**:  
Binary PGM files are generally more space-efficient and faster to read/write, making this tool helpful when dealing with large image files.

---

### 4. **pgmb2a.c**

**Purpose**:  
This program converts a **binary PGM** file to an **ASCII PGM** file.

**How it works**:
- The input image is read in binary format.
- The magic number is switched to indicate an ASCII PGM.
- The pixel data is written in ASCII format to the output file.

**Why use it**:  
ASCII PGM files are easier to inspect manually and are more portable across different systems that might not handle binary files well.

---

### 5. **Core Image Reading Functions**
- **`readImageData()`**: Reads pixel data from an ASCII PGM file.
- **`readImageDataBinary()`**: Reads pixel data from a binary PGM file.

**How it works**:
- The programs allocate memory to store the image data.
- They validate the pixel values and check for errors during the reading process.
- Upon successful reading, the data is stored in memory for further manipulation.



### 6. **pgmEcho.c**

**Purpose**:  
This program reads a PGM image file and outputs an exact copy of the image to another file.

**How it works**:
- The input file is read, and the image data is validated.
- The program checks whether the input file is in ASCII or binary format.
- It writes the image data to the output file in the same format as the input.

**Why use it**:  
This program is useful for duplicating an image while ensuring that the file structure (ASCII or binary) remains consistent.

---

### 7. **pgmCompare.c**

**Purpose**:  
This program compares two PGM image files to check if they are identical. Note it checks for logically identicial image, so if the images are different size but still contain within it values logically, it will works. 

**How it works**:
- The program reads and validates both input files.
- It compares the width, height, and pixel values of the two images.
- If the images are identical, it prints a success message; otherwise, it points out the differences.

**Why use it**:  
This tool is handy when you want to verify that two PGM files are exact copies, especially after performing transformations like reductions or tiling.

---

### 8. **pgmCheckingValue.c**

**Purpose**:  
This module provides functions for validating different aspects of a PGM file, such as the magic number, pixel values, and file format.

**How it works**:
- It contains functions like `checkIfinteger()` to ensure that values such as reduction factors are valid integers.
- The program also verifies that pixel values fall within the valid range and that the file's magic number indicates a proper PGM file format (ASCII or binary).

**Why use it**:  
Ensuring that input files are properly formatted and contain valid values is crucial for error-free image processing. This module enhances the overall robustness of all the programs by catching errors early.


---

## Common Error Handling

Each program implements error handling to ensure robustness:
- **Memory allocation**: Memory for image data is dynamically allocated. If allocation fails, the program terminates with an appropriate error message.
- **File handling**: Programs check if files are successfully opened and closed.
- **Validation**: The pixel values and magic numbers are validated before proceeding with processing.

## Why These Tools?

These tools provide a simple yet powerful way to manipulate PGM images. Whether you need to convert formats, reduce image sizes, or divide images into smaller sections, these programs offer the necessary functionality. The tools are useful for developers and researchers working with image processing, particularly in environments where lightweight image formats like PGM are used.

---

## Compilation and Usage

To compile any of the programs, use a C compiler such as `gcc`. For example:

```bash
gcc -o pgmReduce pgmReduce.c
```

### General Usage

```bash
./program_name input_file.pgm factor output_file.pgm
```

Where:
- `input_file.pgm` is the PGM image you want to process.
- `factor` is the value used to resize or tile the image.
- `output_file.pgm` is the file where the output will be saved.

Example:
```bash
./pgmReduce input.pgm 2 output.pgm
```

This reduces the image size by a factor of 2.


