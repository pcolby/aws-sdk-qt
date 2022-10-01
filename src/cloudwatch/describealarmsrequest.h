// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSREQUEST_H
#define QTAWS_DESCRIBEALARMSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAlarmsRequest : public CloudWatchRequest {

public:
    DescribeAlarmsRequest(const DescribeAlarmsRequest &other);
    DescribeAlarmsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
