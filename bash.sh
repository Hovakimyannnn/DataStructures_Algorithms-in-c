#!/bin/bash


main_dir="/home/artyom/Desktop/files/c_lang/DataStructures_Algorithms"
readme_file="README.md"

# Check if README.md exists in the main directory
if [[ ! -f "$main_dir/$readme_file" ]]; then
    echo "README.md not found in the main directory."
    exit 1
fi


find "$main_dir" -type d -exec cp "$main_dir/$readme_file" {} \;

echo "README.md copied to all directories."
