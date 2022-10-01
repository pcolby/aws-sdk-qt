// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBELOGGROUPSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogGroupsResponse;

class DescribeLogGroupsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeLogGroupsResponsePrivate(DescribeLogGroupsResponse * const q);

    void parseDescribeLogGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLogGroupsResponse)
    Q_DISABLE_COPY(DescribeLogGroupsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
