// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGEVENTSRESPONSE_P_H
#define QTAWS_GETLOGEVENTSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogEventsResponse;

class GetLogEventsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit GetLogEventsResponsePrivate(GetLogEventsResponse * const q);

    void parseGetLogEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLogEventsResponse)
    Q_DISABLE_COPY(GetLogEventsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
