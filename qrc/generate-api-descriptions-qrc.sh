#!/bin/bash
#
# Usage: ./generate-api-descriptions-qrc.sh > api-descriptions.qrc
#
echo '<!DOCTYPE RCC>'
echo '<RCC version="1.0">'
echo '  <qresource>'

PREV_API=
while IFS= read -d '' -r FILENAME; do
  API=`echo "$FILENAME" | sed -re 's:.*/([^-]+)-.*:\1:'`
  if [ "$API" == "$PREV_API" ]; then
    echo "<!--<file>$FILENAME</file>-->"
  else
    echo "    <file>$FILENAME</file>"
  fi
  PREV_API="$API"
done < <(find api-descriptions -maxdepth 1 -name '*.json' -type f -print0 | sort -rz)

echo '  </qresource>'
echo '</RCC>'
