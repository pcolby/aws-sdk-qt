// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGSTREAMSRESPONSE_P_H
#define QTAWS_DESCRIBELOGSTREAMSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogStreamsResponse;

class DescribeLogStreamsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeLogStreamsResponsePrivate(DescribeLogStreamsResponse * const q);

    void parseDescribeLogStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLogStreamsResponse)
    Q_DISABLE_COPY(DescribeLogStreamsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
