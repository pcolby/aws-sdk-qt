// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTREQUEST_P_H
#define QTAWS_DESCRIBEFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "describeforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastRequest;

class DescribeForecastRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeForecastRequestPrivate(const ForecastRequest::Action action,
                                   DescribeForecastRequest * const q);
    DescribeForecastRequestPrivate(const DescribeForecastRequestPrivate &other,
                                   DescribeForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
