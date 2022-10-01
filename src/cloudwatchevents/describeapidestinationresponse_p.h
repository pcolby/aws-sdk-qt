// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAPIDESTINATIONRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeApiDestinationResponse;

class DescribeApiDestinationResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DescribeApiDestinationResponsePrivate(DescribeApiDestinationResponse * const q);

    void parseDescribeApiDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApiDestinationResponse)
    Q_DISABLE_COPY(DescribeApiDestinationResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
