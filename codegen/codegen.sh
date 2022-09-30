#!/usr/bin/env bash

set -o errexit -o noclobber -o nounset -o pipefail

SELF_PATH="$(readlink -f "${BASH_SOURCE[0]}")"

: "${MODELS_DIR:=${SELF_PATH%/*}/aws-sdk-js-v3/codegen/sdk-codegen/aws-models}"
: "${TEMPLATES_DIR:=${SELF_PATH%/*}/templates}"
: "${OUTPUT_DIR:=${SELF_PATH%/*}/..}"

function require {
  local C
  for c in "$@"; do
    local -u V="${c//[^[:word:]]/_}";
    if [ -v "$V" ]; then continue; fi
    C=$(command -v "$c") || { echo "Required command not found: $c" >&2; exit 1; }
    declare -gr "$V"="$C"
  done
}

require git rm smithy-qt

# \todo check for local changes
# \todo remove existing generated files

"$SMITHY_QT" --version
echo "$SMITHY_QT" --models "$MODELS_DIR" --templates "$TEMPLATES_DIR" --output "$OUTPUT_DIR" "$@"
"$SMITHY_QT" --models "$MODELS_DIR" --templates "$TEMPLATES_DIR" --output "$OUTPUT_DIR" "$@"
