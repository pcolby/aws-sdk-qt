// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTREQUEST_P_H
#define QTAWS_DESCRIBEWHATIFFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "describewhatifforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastRequest;

class DescribeWhatIfForecastRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeWhatIfForecastRequestPrivate(const ForecastRequest::Action action,
                                   DescribeWhatIfForecastRequest * const q);
    DescribeWhatIfForecastRequestPrivate(const DescribeWhatIfForecastRequestPrivate &other,
                                   DescribeWhatIfForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
