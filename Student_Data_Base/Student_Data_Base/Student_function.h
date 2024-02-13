//
//  Student_function.h
//  Student_Data_Base
//
//  Created by Youssef on 26/09/2023.
//

#ifndef Student_function_h
#define Student_function_h

#define NULL_PTR ((void *)0)

typedef unsigned char ui8;       // +
typedef signed char si8;         // _ & +
typedef unsigned short ui16;     //%hi
typedef signed short si16;       //%hu
typedef unsigned long ui32;      //%u
typedef signed long si32;        //%d    = int
typedef unsigned long long ui64; //%lu
typedef signed long long si64;   //%li
typedef float f32;               //%f
typedef double d64;              // %lf

typedef struct student
{
    ui16 ID;
    ui16 Course1_ID;
    ui16 Course1_Grade;

    ui16 Course2_ID;
    ui16 Course2_Grade;
} studend;

void enter(void);
void create_entry(studend *add, ui16 totalstudents);
void database(studend *backup);
void read_student(studend *backup, ui16 totalstudents);
void list(studend *backup);
void check_ID(struct student add[], ui16 totalstudents);
void delete_student(studend *add, ui16 *totalstudents);
void check_full(studend add[], ui16 totalstudents);

// void delete_student(struct student *add, ui16 *totalstudents);

extern studend *backup;

#ifndef TRUE
#define TRUE (1u)
#endif

// #ifndef LOGIC HIGH
// #define LOGIC_HIGH          (1u)
// #endif
//
// #ifndef LOGIC LOW
// #define LOGIC_LOW            (0u)
// #endif

// typedef enum; boolean {false, true}; bool ;

//
// #endif /* Student_function_h
//
//
//\a    Alarm or Beep    It is used to generate a bell sound in the C program.
//\b    Backspace    It is used to move the cursor one place backward.
//\f    Form Feed    It is used to move the cursor to the start of the next logical page.
//\n    New Line    It moves the cursor to the start of the next line.
//\r    Carriage Return    It moves the cursor to the start of the current line.
//\t    Horizontal Tab    It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
//\v    Vertical Tab    It is used to insert vertical space.
//\\    Backlash    Use to insert backslash character.
//\’    Single Quote    It is used to display a single quotation mark.
//\”    Double Quote    It is used to display double quotation marks.
//\?    Question Mark    It is used to display a question mark.
//\ooo    Octal Number    It is used to represent an octal number.
//\xhh    Hexadecimal Number    It represents the hexadecimal number.
//\0    NULL    It represents the NULL character.

#endif
