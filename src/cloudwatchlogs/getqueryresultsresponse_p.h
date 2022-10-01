// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRESULTSRESPONSE_P_H
#define QTAWS_GETQUERYRESULTSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetQueryResultsResponse;

class GetQueryResultsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit GetQueryResultsResponsePrivate(GetQueryResultsResponse * const q);

    void parseGetQueryResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryResultsResponse)
    Q_DISABLE_COPY(GetQueryResultsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
