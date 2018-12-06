#!/bin/bash
if [ -z "$1" ]; then
	echo -e "Invalid input, You need to add your source file!"
	echo -e "Example: submit hello.cpp"
	exit
fi
echo -e "Hello $USER I am going to submit file $1"
echo -e "*** If you need to stop at anypoint press [Ctrl c]"
echo -e "*** THIS WILL OVERWRITE ANY PREVIOUSLY SUBMITTED FILE"
echo -e "C++ or Fortran? (c/f)"
read lang
if [ $lang == 'c' ]; then
	ext='cpp'
elif [ $lang == 'f' ]; then
        ext='f90'
else 
	echo -e "Invalid input try it again and use c for C++ or f for Fortran"  
fi
echo -e "Is this an inclass challenge? (y/n)"
read question
if [ $question == 'y' ]; then 
	echo -e "What number is it?"
	read challnum
	echo -e "As you command the source code will be submitted to /usr/bin/submissions."
	echo -e "Submitting your source $1 as $USER-COE322-inclass$challnum.$ext"
        cp $1 /usr/bin/submissions/$USER-COE322-inclass$challnum.$ext
       	echo -e "Also made a copy in your current directory as $USER-COE322-inclass$challnum.$ext"
	cp $1 $USER-COE322-inclass$challnum.$ext
	exit
elif [ $question == 'n' ]; then
        echo -e "Assuming this is HW then, what number is it?"
        read hwnum
	echo -e "As you command the source code will be submitted to /usr/bin/submissions."
        echo -e "Submitting your source $1 as $USER-COE322-HW$hwnum.$ext"
        cp $1 /usr/bin/submissions/$USER-COE322-HW$hwnum.$ext
        echo -e "Also made a copy in your current directory as $USER-COE322-HW$hwnum.$ext"
        cp $1 $USER-COE322-HW$hwnum.$ext
	exit
else 
	echo -e "Invalid input try it again and use y for yes or n for no"
	exit
fi
