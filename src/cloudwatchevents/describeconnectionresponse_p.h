// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeConnectionResponse;

class DescribeConnectionResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DescribeConnectionResponsePrivate(DescribeConnectionResponse * const q);

    void parseDescribeConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionResponse)
    Q_DISABLE_COPY(DescribeConnectionResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
