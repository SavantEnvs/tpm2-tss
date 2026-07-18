/*
 * mayhem/lsan_off.c — the sanctioned build-time LeakSanitizer off-switch (SPEC §6.2 item 15).
 *
 * Turns off ONLY the leak check at process exit; AddressSanitizer and UndefinedBehaviorSanitizer
 * stay fully active. Compiled with the same $SANITIZER_FLAGS as the harnesses and linked by
 * mayhem/build.sh into every sanitized binary it produces: the 8 libFuzzer targets
 * (/mayhem/Tss2_Sys_*) and their 8 run-once reproducers (/mayhem/Tss2_Sys_*-standalone).
 */
int __lsan_is_turned_off(void) { return 1; }
