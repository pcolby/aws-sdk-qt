// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGROUPFIELDSRESPONSE_H
#define QTAWS_GETLOGGROUPFIELDSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "getloggroupfieldsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogGroupFieldsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogGroupFieldsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    GetLogGroupFieldsResponse(const GetLogGroupFieldsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLogGroupFieldsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogGroupFieldsResponse)
    Q_DISABLE_COPY(GetLogGroupFieldsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
