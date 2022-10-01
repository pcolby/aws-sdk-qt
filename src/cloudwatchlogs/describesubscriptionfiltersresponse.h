// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONFILTERSRESPONSE_H
#define QTAWS_DESCRIBESUBSCRIPTIONFILTERSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describesubscriptionfiltersrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeSubscriptionFiltersResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeSubscriptionFiltersResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeSubscriptionFiltersResponse(const DescribeSubscriptionFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubscriptionFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscriptionFiltersResponse)
    Q_DISABLE_COPY(DescribeSubscriptionFiltersResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
