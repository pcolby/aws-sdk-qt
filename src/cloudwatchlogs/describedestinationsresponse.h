// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDESTINATIONSRESPONSE_H
#define QTAWS_DESCRIBEDESTINATIONSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describedestinationsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeDestinationsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeDestinationsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeDestinationsResponse(const DescribeDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDestinationsResponse)
    Q_DISABLE_COPY(DescribeDestinationsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
