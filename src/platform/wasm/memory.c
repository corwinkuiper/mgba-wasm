/* Copyright (c) 2013-2019 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#include <mgba-util/memory.h>

#include <malloc.h>

void* anonymousMemoryMap(size_t size) {
	return memalign(4096, size);
}

void mappedMemoryFree(void* memory, size_t size) {
	UNUSED(size);
	free(memory);
}
