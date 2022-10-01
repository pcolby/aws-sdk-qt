// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMENTSRESPONSE_P_H
#define QTAWS_DESCRIBECOMMENTSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeCommentsResponse;

class DescribeCommentsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeCommentsResponsePrivate(DescribeCommentsResponse * const q);

    void parseDescribeCommentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCommentsResponse)
    Q_DISABLE_COPY(DescribeCommentsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
