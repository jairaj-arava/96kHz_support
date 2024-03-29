#!/bin/bash
# SPDX-License-Identifier: BSD-3-Clause
# Copyright(c) 2023 Intel Corporation. All rights reserved.
# This script generates the contents page and stores it in extra-contents/contents.doxy

set -e
cd "$(dirname "$0")"

generate_contents ()
{
	cat <<EOF
# This contents list is automatically generated by $0.
/*! \page doc_contents
    \section doc_classes Classes
EOF
	for ctype in Base Widget Control Dai Pipeline
	do
		echo "    \subsection doc_${ctype,}_classes $ctype Classes"
		find .. -name \*.conf -print0 |
		xargs -0 awk "/^Class\.$ctype\./ "'{
			split($1, a, "\\.");
			name = a[3]; gsub("\"", "", name); gsub("-", "_", name);
			print "\t\\li \\ref " name
		}' | sort -u
		echo
	done

	echo '*/'
}

generate_contents
