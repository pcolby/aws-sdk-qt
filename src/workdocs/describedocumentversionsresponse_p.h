// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDOCUMENTVERSIONSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeDocumentVersionsResponse;

class DescribeDocumentVersionsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeDocumentVersionsResponsePrivate(DescribeDocumentVersionsResponse * const q);

    void parseDescribeDocumentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentVersionsResponse)
    Q_DISABLE_COPY(DescribeDocumentVersionsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
