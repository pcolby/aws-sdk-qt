// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICSETREQUEST_H
#define QTAWS_DESCRIBEMETRICSETREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeMetricSetRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeMetricSetRequest : public LookoutMetricsRequest {

public:
    DescribeMetricSetRequest(const DescribeMetricSetRequest &other);
    DescribeMetricSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
