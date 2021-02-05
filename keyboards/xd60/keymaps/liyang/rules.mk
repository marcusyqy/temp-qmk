# NOTE: qmk ignores my keymap.c entirely if keymap.json exists.
LIYANG=keyboards/xd60/keymaps/liyang
$(LIYANG)/keymap.c: $(LIYANG)/liyang.json $(LIYANG)/keymap.c.in
	qmk json2c "$<" > "$@"
	cat "$@.in" >> "$@"

BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration; full: 752B w/o console, 796B w/ console
CONSOLE_ENABLE = yes        # Console for debug; 3568B
