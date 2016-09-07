#!/bin/bash

while IFS= read -d '' -r FILENAME; do
  echo "$FILENAME"
  ERROR=`tv4 -s api-description.schema.json -j "$FILENAME" -v 2>&1 1>/dev/null`; RC=$?
  [ -z "$ERROR" ] || { echo "$ERROR"; [ "$RC" -ne 0 ] || RC=1; }
  [ "$RC" -eq 0 ] || exit $RC
done < <(find descriptions -maxdepth 1 -name '*.json' -type f -print0)
