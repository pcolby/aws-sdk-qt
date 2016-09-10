#!/bin/bash

SELF=`readlink --canonicalize "$0"`
SELF_DIR=`dirname "$SELF"`
DESC_DIR="$SELF_DIR/api-descriptions"
DESC_SCHEMA="$SELF_DIR/api-description.schema.json"

while IFS= read -d '' -r DESC_FILENAME; do
  basename "$DESC_FILENAME"
  ERROR=`tv4 -s "$DESC_SCHEMA" -j "$DESC_FILENAME" -v 2>&1 1>/dev/null`; RC=$?
  [ -z "$ERROR" ] || { echo "$ERROR"; [ "$RC" -ne 0 ] || RC=1; }
  [ "$RC" -eq 0 ] || exit $RC
done < <(find "$DESC_DIR" -maxdepth 1 -name '*.json' -type f -print0)
