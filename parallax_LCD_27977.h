/*  Command codes for Parallax 2 x 16 backlight LCD with piezo speaker
    Parallax part# 27977
    IMPORTANT: use .write(COMMAND CODE) function of software serial to send commands.
    commands will be displayed as text if .print() function is used.
    These defines are straight from the data sheet at parallax.com.

*/
#ifndef parallax_27977_h
#define parallax_27977_h
  
#define EMPTY_LINE "                " // 16 spaces

#define DISPLAY_CUSTOM_CHARACTER_0 0x00
#define DISPLAY_CUSTOM_CHARACTER_1 0x01
#define DISPLAY_CUSTOM_CHARACTER_2 0x02
#define DISPLAY_CUSTOM_CHARACTER_3 0x03
#define DISPLAY_CUSTOM_CHARACTER_4 0x04
#define DISPLAY_CUSTOM_CHARACTER_5 0x05
#define DISPLAY_CUSTOM_CHARACTER_6 0x06
#define DISPLAY_CUSTOM_CHARACTER_7 0x07
#define CURSOR_MOVE_LEFT 0x08
#define CURSOR_MOVE_RIGHT 0x09
#define LINEFEED 0x0A
// command 0x0B not used
#define CLEAR_SCREEN 0x0C // must not send more data for at least 5 milliseconds after issuing this command
#define CARRIAGE_RETURN 0x0D
// command 0x0E thru 0x10 not used
#define BACKLIGHT_ON 0x11
#define BACKLIGHT_OFF 0x12
// command 0x13 thru 0x14 not used
#define DISPLAY_BLANK 0x15 // turns display off, but does not erase the display characters
#define SCREEN_MODE_0 0x16 // display on, cursor off, solid characters
#define SCREEN_MODE_1 0x17 // display on, cursor off, blink characters
#define SCREEN_MODE_2 0x18 // display on, cursor on, solid characters (default)
#define SCREEN_MODE_3 0x19 // display on, cursor on, blink characters
// command 0x1A thru 0x1F not used
// 0x20 thru 0x7f ASCII characters
#define MOVE_CURSOR_0_0 0x80 // move cursor to line 0, position 0
#define MOVE_CURSOR_0_1 0x81 // move cursor to line 0, position 1
#define MOVE_CURSOR_0_2 0x82 // move cursor to line 0, position 2
#define MOVE_CURSOR_0_3 0x83 // move cursor to line 0, position 3
#define MOVE_CURSOR_0_4 0x84 // move cursor to line 0, position 4
#define MOVE_CURSOR_0_5 0x85 // move cursor to line 0, position 5
#define MOVE_CURSOR_0_6 0x86 // move cursor to line 0, position 6
#define MOVE_CURSOR_0_7 0x87 // move cursor to line 0, position 7
#define MOVE_CURSOR_0_8 0x88 // move cursor to line 0, position 8
#define MOVE_CURSOR_0_9 0x89 // move cursor to line 0, position 9
#define MOVE_CURSOR_0_10 0x8A // move cursor to line 0, position 10
#define MOVE_CURSOR_0_11 0x8B // move cursor to line 0, position 11
#define MOVE_CURSOR_0_12 0x8C // move cursor to line 0, position 12
#define MOVE_CURSOR_0_13 0x8D // move cursor to line 0, position 13
#define MOVE_CURSOR_0_14 0x8E // move cursor to line 0, position 14
#define MOVE_CURSOR_0_15 0x8F // move cursor to line 0, position 15
// command 0x90 thru 0x93 are cursor move commands  for the displays with more characters and lines. This display only has two lines and 16 characters per line.
#define MOVE_CURSOR_1_0 0x94 // move cursor to line 1, position 0
#define MOVE_CURSOR_1_1 0x95 // move cursor to line 1, position 1
#define MOVE_CURSOR_1_2 0x96 // move cursor to line 1, position 2
#define MOVE_CURSOR_1_3 0x97 // move cursor to line 1, position 3
#define MOVE_CURSOR_1_4 0x98 // move cursor to line 1, position 4
#define MOVE_CURSOR_1_5 0x99 // move cursor to line 1, position 5
#define MOVE_CURSOR_1_6 0x9A // move cursor to line 1, position 6
#define MOVE_CURSOR_1_7 0x9B // move cursor to line 1, position 7
#define MOVE_CURSOR_1_8 0x9C // move cursor to line 1, position 8
#define MOVE_CURSOR_1_9 0x9D // move cursor to line 1, position 9
#define MOVE_CURSOR_1_10 0x9E // move cursor to line 1, position 10
#define MOVE_CURSOR_1_11 0x9F // move cursor to line 1, position 11
#define MOVE_CURSOR_1_12 0xA0 // move cursor to line 1, position 12
#define MOVE_CURSOR_1_13 0xA1 // move cursor to line 1, position 13
#define MOVE_CURSOR_1_14 0xA2 // move cursor to line 1, position 14
#define MOVE_CURSOR_1_15 0xA3 // move cursor to line 1, position 15
// command 0xA4 thru 0xCF are cursor move commands for the displays with more characters and lines. This display only has two lines and 16 characters per line.
#define NOTE_LENGTH_64 0xD0 // set the note length to 1/64 note
#define NOTE_LENGTH_32 0XD1 // set the note length to 1/32 note
#define NOTE_LENGTH_16 0XD2 // set the note length to 1/16 note
#define NOTE_LENGTH_8 0XD3 // set the note length to 1/8 note
#define NOTE_LENGTH_4 0XD4 // set the note length to 1/4 note
#define NOTE_LENGTH_2 0XD5 // set the note length to 1/2 note
#define NOTE_LENGTH_1 0XD6 // set the note length to 1/1  (whole) note (2 seconds)
#define OCTAVE_3 0xD7 // select the 3rd scale (A=220Hz)
#define OCTAVE_4 0xD8 // select the 4th scale (A=440Hz)
#define OCTAVE_5 0xD9 // select the 5th scale (A=880Hz)
#define OCTAVE_6 0xDA // select the 6th scale (A=1760Hz)
#define OCTAVE_7 0xDB // select the 7th scale (A=3520Hz)
#define NOTE_A 0xDC // play note A
#define NOTE_As 0xDD // play note A sharp
#define NOTE_B 0xDE // play note B
#define NOTE_C 0xDF // play note C
#define NOTE_Cs 0xE0 // play note C sharp
#define NOTE_D 0xE1 // play note D
#define NOTE_Ds 0xE2 // play note D sharp
#define NOTE_E 0xE3 // play note E
#define NOTE_F 0xE4 // play note F
#define NOTE_Fs 0xE5 // play note F sharp
#define NOTE_G 0xE6 // play note G
#define NOTE_Gs 0xE7 // play note G sharp
#define REST 0xE8 // one rest for the current note duration
// command 0xE9 thru 0xF7 not used
#define DEFINE_CUSTOM_CHAR_0 0xF8 // Define custom character 0. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_1 0xF9 // Define custom character 1. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_2 0xFA // Define custom character 2. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_3 0xFB // Define custom character 3. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_4 0xFC // Define custom character 4. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_5 0xFD // Define custom character 5. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_6 0xFE // Define custom character 6. This command must be followed by eight data bytes.
#define DEFINE_CUSTOM_CHAR_7 0xFF // Define custom character 7. This command must be followed by eight data bytes.

#endif