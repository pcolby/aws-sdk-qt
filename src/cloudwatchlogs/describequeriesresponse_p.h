// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERIESRESPONSE_P_H
#define QTAWS_DESCRIBEQUERIESRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueriesResponse;

class DescribeQueriesResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeQueriesResponsePrivate(DescribeQueriesResponse * const q);

    void parseDescribeQueriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQueriesResponse)
    Q_DISABLE_COPY(DescribeQueriesResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
