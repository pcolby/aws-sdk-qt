// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROOTFOLDERSRESPONSE_P_H
#define QTAWS_DESCRIBEROOTFOLDERSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeRootFoldersResponse;

class DescribeRootFoldersResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeRootFoldersResponsePrivate(DescribeRootFoldersResponse * const q);

    void parseDescribeRootFoldersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRootFoldersResponse)
    Q_DISABLE_COPY(DescribeRootFoldersResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
