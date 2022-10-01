// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSFORMETRICREQUEST_H
#define QTAWS_DESCRIBEALARMSFORMETRICREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsForMetricRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAlarmsForMetricRequest : public CloudWatchRequest {

public:
    DescribeAlarmsForMetricRequest(const DescribeAlarmsForMetricRequest &other);
    DescribeAlarmsForMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmsForMetricRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
