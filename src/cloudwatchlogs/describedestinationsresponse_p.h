// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDESTINATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDESTINATIONSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeDestinationsResponse;

class DescribeDestinationsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeDestinationsResponsePrivate(DescribeDestinationsResponse * const q);

    void parseDescribeDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDestinationsResponse)
    Q_DISABLE_COPY(DescribeDestinationsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
