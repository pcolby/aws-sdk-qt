// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGROUPFIELDSRESPONSE_P_H
#define QTAWS_GETLOGGROUPFIELDSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogGroupFieldsResponse;

class GetLogGroupFieldsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit GetLogGroupFieldsResponsePrivate(GetLogGroupFieldsResponse * const q);

    void parseGetLogGroupFieldsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLogGroupFieldsResponse)
    Q_DISABLE_COPY(GetLogGroupFieldsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
