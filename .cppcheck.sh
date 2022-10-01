#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

RC=0
for platform in unix{32,64} win{32{A,W},64}; do
  for defines in -{D,U}QTAWS_LIBRARY -{DPROJECT_PRE_RELEASE=pre,UPROJECT_PRE_RELEASE}; do
    echo "$platform $defines"
    cppcheck $defines -DQ_DECLARE_{FLAGS,PRIVATE,PUBLIC} \
      --enable=all --error-exitcode=1 --force --inline-suppr \
      --language=c++ --platform=$platform --std=c++{03,11,14,17,20} \
      --suppress={missingIncludeSystem,unusedFunction} --suppress=no{CopyConstructor,OperatorEq} \
      "$@" src test | grep -Eve '^Checking' | uniq --skip-fields=1
    RC=$((RC+$?))
  done
done
exit $RC
