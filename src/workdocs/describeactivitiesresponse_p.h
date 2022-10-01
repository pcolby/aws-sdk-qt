// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITIESRESPONSE_P_H
#define QTAWS_DESCRIBEACTIVITIESRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeActivitiesResponse;

class DescribeActivitiesResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeActivitiesResponsePrivate(DescribeActivitiesResponse * const q);

    void parseDescribeActivitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActivitiesResponse)
    Q_DISABLE_COPY(DescribeActivitiesResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
