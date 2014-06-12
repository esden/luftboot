##
## This file is part of the luftboot project.
##
## Copyright (C) 2014 Piotr Esden-Tempski <piotr@esden.net>
##
## This library is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This library is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this library.  If not, see <http://www.gnu.org/licenses/>.
##

ifneq ($(V),1)
Q := @
# Do not print "Entering directory ...".
MAKEFLAGS += --no-print-directory
endif

all: lib main

main: lib
	@printf "  BUILD main\n";
	$(Q)$(MAKE) --directory=src

lib:
	$(Q)if [ ! "`ls -A libopencm3`" ] ; then \
		echo "######## ERROR ########"; \
		echo "\tlibopencm3 is not initialized."; \
		echo "\tPlease run:"; \
		echo "\t$$ git submodule init"; \
		echo "\t$$ git submodule update"; \
		echo "\tbefore running make."; \
		echo "######## ERROR ########"; \
		exit 1; \
	fi
	$(Q)$(MAKE) -C libopencm3 lib TARGETS="stm32/f1 stm32/f4"

clean:
	$(Q)$(MAKE) -C libopencm3 clean
	$(Q)$(MAKE) -C src clean

.PHONY: all lib