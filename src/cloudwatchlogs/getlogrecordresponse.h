// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGRECORDRESPONSE_H
#define QTAWS_GETLOGRECORDRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "getlogrecordrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogRecordResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogRecordResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    GetLogRecordResponse(const GetLogRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLogRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogRecordResponse)
    Q_DISABLE_COPY(GetLogRecordResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
