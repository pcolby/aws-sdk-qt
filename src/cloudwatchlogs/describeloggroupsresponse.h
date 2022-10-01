// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGROUPSRESPONSE_H
#define QTAWS_DESCRIBELOGGROUPSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describeloggroupsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogGroupsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeLogGroupsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeLogGroupsResponse(const DescribeLogGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLogGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLogGroupsResponse)
    Q_DISABLE_COPY(DescribeLogGroupsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
