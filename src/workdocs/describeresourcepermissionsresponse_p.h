// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEPERMISSIONSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeResourcePermissionsResponse;

class DescribeResourcePermissionsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeResourcePermissionsResponsePrivate(DescribeResourcePermissionsResponse * const q);

    void parseDescribeResourcePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePermissionsResponse)
    Q_DISABLE_COPY(DescribeResourcePermissionsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
