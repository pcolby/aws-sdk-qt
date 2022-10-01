// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICFILTERSREQUEST_H
#define QTAWS_DESCRIBEMETRICFILTERSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeMetricFiltersRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeMetricFiltersRequest : public CloudWatchLogsRequest {

public:
    DescribeMetricFiltersRequest(const DescribeMetricFiltersRequest &other);
    DescribeMetricFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMetricFiltersRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
