// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYREQUEST_P_H
#define QTAWS_DESCRIBEEXPLAINABILITYREQUEST_P_H

#include "forecastrequest_p.h"
#include "describeexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityRequest;

class DescribeExplainabilityRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeExplainabilityRequestPrivate(const ForecastRequest::Action action,
                                   DescribeExplainabilityRequest * const q);
    DescribeExplainabilityRequestPrivate(const DescribeExplainabilityRequestPrivate &other,
                                   DescribeExplainabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
