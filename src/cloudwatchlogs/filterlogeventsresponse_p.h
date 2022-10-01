// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FILTERLOGEVENTSRESPONSE_P_H
#define QTAWS_FILTERLOGEVENTSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class FilterLogEventsResponse;

class FilterLogEventsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit FilterLogEventsResponsePrivate(FilterLogEventsResponse * const q);

    void parseFilterLogEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FilterLogEventsResponse)
    Q_DISABLE_COPY(FilterLogEventsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
