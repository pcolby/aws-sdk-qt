// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMALIASESRESPONSE_P_H
#define QTAWS_DESCRIBEFILESYSTEMALIASESRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DescribeFileSystemAliasesResponse;

class DescribeFileSystemAliasesResponsePrivate : public FSxResponsePrivate {

public:

    explicit DescribeFileSystemAliasesResponsePrivate(DescribeFileSystemAliasesResponse * const q);

    void parseDescribeFileSystemAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemAliasesResponse)
    Q_DISABLE_COPY(DescribeFileSystemAliasesResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
