// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSREQUEST_H
#define QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectionExecutionsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeAnomalyDetectionExecutionsRequest : public LookoutMetricsRequest {

public:
    DescribeAnomalyDetectionExecutionsRequest(const DescribeAnomalyDetectionExecutionsRequest &other);
    DescribeAnomalyDetectionExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectionExecutionsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
