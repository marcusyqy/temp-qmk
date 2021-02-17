# NOTE: qmk ignores my keymap.c entirely if keymap.json exists.
LIYANG=keyboards/xd60/keymaps/liyang
$(LIYANG)/keymap.c: $(LIYANG)/liyang.json $(LIYANG)/keymap.c.in
	qmk json2c "$<" > "$@"
	cat "$@.in" >> "$@"

BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration; full: 752B w/o console, 796B w/ console
CONSOLE_ENABLE = yes        # Console for debug; 3568B
COMMAND_ENABLE = yes        # Commands for debug and configuration; 1122B w/o console, 5098B w/ console
MOUSEKEY_ENABLE = yes       # Mouse keys; pre-refactor: w/o 3958 w/ 1612B MK_3_SPEED, post: 2532B w/o 1386B w/ MK_3_SPEED,

POINTING_DEVICE_ENABLE = no # for testing action.c

UNICODE_ENABLE = no         # Unicode; 1008B
UNICODEMAP_ENABLE = no      # Unicode map; 1394B
UCIS_ENABLE = no            # UCIS; UC_LNX: 1806B

