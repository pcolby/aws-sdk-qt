// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGEVENTSRESPONSE_H
#define QTAWS_PUTLOGEVENTSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutLogEventsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutLogEventsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutLogEventsResponse(const PutLogEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLogEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLogEventsResponse)
    Q_DISABLE_COPY(PutLogEventsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
