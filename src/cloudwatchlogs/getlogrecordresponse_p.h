// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGRECORDRESPONSE_P_H
#define QTAWS_GETLOGRECORDRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogRecordResponse;

class GetLogRecordResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit GetLogRecordResponsePrivate(GetLogRecordResponse * const q);

    void parseGetLogRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLogRecordResponse)
    Q_DISABLE_COPY(GetLogRecordResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
