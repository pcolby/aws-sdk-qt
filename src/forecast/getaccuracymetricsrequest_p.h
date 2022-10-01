// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCURACYMETRICSREQUEST_P_H
#define QTAWS_GETACCURACYMETRICSREQUEST_P_H

#include "forecastrequest_p.h"
#include "getaccuracymetricsrequest.h"

namespace QtAws {
namespace Forecast {

class GetAccuracyMetricsRequest;

class GetAccuracyMetricsRequestPrivate : public ForecastRequestPrivate {

public:
    GetAccuracyMetricsRequestPrivate(const ForecastRequest::Action action,
                                   GetAccuracyMetricsRequest * const q);
    GetAccuracyMetricsRequestPrivate(const GetAccuracyMetricsRequestPrivate &other,
                                   GetAccuracyMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccuracyMetricsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
