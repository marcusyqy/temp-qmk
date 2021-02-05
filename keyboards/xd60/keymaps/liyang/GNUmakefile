.PHONY: dl c2json
.INTERMEDIATE: readme.json

# ln -s ~/Downloads/liyang.json dl.json
# ln -sr $PWD/liyang.json ~/Downloads/upload.json
dl: dl.json
	jq --sort-keys 'del(.documentation)' $^ > liyang.json
	rm $$(readlink -f "$^")

%.json: %.md
	jq --raw-input --slurp '{notes:.}' $^ > $@

liyang.json: keymap.c readme.json author.json
	qmk c2json -kb xd60/rev3 -km liyang $< \
		| jq --raw-output --slurp --sort-keys 'reduce .[] as $$item ({}; . * $$item)' - $(filter-out $<,$^) > $@

