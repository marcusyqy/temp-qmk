# NOTE: qmk ignores my keymap.c entirely if keymap.json exists.
LIYANG=keyboards/xd60/keymaps/liyang
$(LIYANG)/keymap.c: $(LIYANG)/liyang.json $(LIYANG)/keymap.c.in
	qmk json2c "$<" > "$@"
	cat "$@.in" >> "$@"

