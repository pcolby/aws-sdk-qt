// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYRESPONSE_H
#define QTAWS_STOPQUERYRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "stopqueryrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class StopQueryResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT StopQueryResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    StopQueryResponse(const StopQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopQueryResponse)
    Q_DISABLE_COPY(StopQueryResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
