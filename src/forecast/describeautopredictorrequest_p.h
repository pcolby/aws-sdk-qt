// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOPREDICTORREQUEST_P_H
#define QTAWS_DESCRIBEAUTOPREDICTORREQUEST_P_H

#include "forecastrequest_p.h"
#include "describeautopredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeAutoPredictorRequest;

class DescribeAutoPredictorRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeAutoPredictorRequestPrivate(const ForecastRequest::Action action,
                                   DescribeAutoPredictorRequest * const q);
    DescribeAutoPredictorRequestPrivate(const DescribeAutoPredictorRequestPrivate &other,
                                   DescribeAutoPredictorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoPredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
