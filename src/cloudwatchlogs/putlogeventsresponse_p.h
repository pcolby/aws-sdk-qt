// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGEVENTSRESPONSE_P_H
#define QTAWS_PUTLOGEVENTSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutLogEventsResponse;

class PutLogEventsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutLogEventsResponsePrivate(PutLogEventsResponse * const q);

    void parsePutLogEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLogEventsResponse)
    Q_DISABLE_COPY(PutLogEventsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
