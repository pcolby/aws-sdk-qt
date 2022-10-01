// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGEVENTSRESPONSE_H
#define QTAWS_GETLOGEVENTSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "getlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogEventsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogEventsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    GetLogEventsResponse(const GetLogEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLogEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogEventsResponse)
    Q_DISABLE_COPY(GetLogEventsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
