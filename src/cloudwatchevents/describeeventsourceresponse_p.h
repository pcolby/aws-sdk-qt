// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCERESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSOURCERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeEventSourceResponse;

class DescribeEventSourceResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DescribeEventSourceResponsePrivate(DescribeEventSourceResponse * const q);

    void parseDescribeEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventSourceResponse)
    Q_DISABLE_COPY(DescribeEventSourceResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
