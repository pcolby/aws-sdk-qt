#!/bin/bash
#
# Usage: ./generate-api-descriptions-qrc.sh > api-descriptions.qrc
#
echo '<!DOCTYPE RCC>'
echo '<RCC version="1.0">'
echo '  <qresource>'

PREV_API=
while IFS= read -d '' -r FILENAME; do
  # Extract the service name the same way the the official aws-sdk-cpp project does,
  # ie the service name is everything but the '-yyyy-mm-dd.normal.json' filename suffix.
  # See https://github.com/aws/aws-sdk-cpp/blob/master/scripts/generate_sdks.py#L65
  API=`basename "$FILENAME" | sed -re 's/([a-zA-Z0-9_-]+)-([0-9]{4}-[0-9]{2}-[0-9]{2}).normal.json/\1/'`
  if [ "$API" == "$PREV_API" ]; then
    echo "<!--<file>$FILENAME</file>-->"
  else
    echo "    <file>$FILENAME</file>"
  fi
  PREV_API="$API"
done < <(find api-descriptions -maxdepth 1 -name '*.json' -type f -print0 | sort -rz)

echo '  </qresource>'
echo '</RCC>'
