// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGSTREAMSRESPONSE_H
#define QTAWS_DESCRIBELOGSTREAMSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describelogstreamsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogStreamsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeLogStreamsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeLogStreamsResponse(const DescribeLogStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLogStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLogStreamsResponse)
    Q_DISABLE_COPY(DescribeLogStreamsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
