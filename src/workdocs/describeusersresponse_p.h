// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSRESPONSE_P_H
#define QTAWS_DESCRIBEUSERSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeUsersResponse;

class DescribeUsersResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeUsersResponsePrivate(DescribeUsersResponse * const q);

    void parseDescribeUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUsersResponse)
    Q_DISABLE_COPY(DescribeUsersResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
