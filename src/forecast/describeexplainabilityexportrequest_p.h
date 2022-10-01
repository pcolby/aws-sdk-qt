// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYEXPORTREQUEST_P_H
#define QTAWS_DESCRIBEEXPLAINABILITYEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "describeexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityExportRequest;

class DescribeExplainabilityExportRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeExplainabilityExportRequestPrivate(const ForecastRequest::Action action,
                                   DescribeExplainabilityExportRequest * const q);
    DescribeExplainabilityExportRequestPrivate(const DescribeExplainabilityExportRequestPrivate &other,
                                   DescribeExplainabilityExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
