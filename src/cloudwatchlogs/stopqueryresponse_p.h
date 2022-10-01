// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYRESPONSE_P_H
#define QTAWS_STOPQUERYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class StopQueryResponse;

class StopQueryResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit StopQueryResponsePrivate(StopQueryResponse * const q);

    void parseStopQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopQueryResponse)
    Q_DISABLE_COPY(StopQueryResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
