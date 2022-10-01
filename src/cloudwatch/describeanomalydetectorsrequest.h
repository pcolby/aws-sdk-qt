// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORSREQUEST_H
#define QTAWS_DESCRIBEANOMALYDETECTORSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAnomalyDetectorsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAnomalyDetectorsRequest : public CloudWatchRequest {

public:
    DescribeAnomalyDetectorsRequest(const DescribeAnomalyDetectorsRequest &other);
    DescribeAnomalyDetectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectorsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
