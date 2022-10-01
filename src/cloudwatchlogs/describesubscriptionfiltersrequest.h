// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_H
#define QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeSubscriptionFiltersRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeSubscriptionFiltersRequest : public CloudWatchLogsRequest {

public:
    DescribeSubscriptionFiltersRequest(const DescribeSubscriptionFiltersRequest &other);
    DescribeSubscriptionFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscriptionFiltersRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
