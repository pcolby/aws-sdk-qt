// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERIESRESPONSE_H
#define QTAWS_DESCRIBEQUERIESRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describequeriesrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueriesResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeQueriesResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeQueriesResponse(const DescribeQueriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQueriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueriesResponse)
    Q_DISABLE_COPY(DescribeQueriesResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
