// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORREQUEST_P_H
#define QTAWS_DESCRIBEPREDICTORREQUEST_P_H

#include "forecastrequest_p.h"
#include "describepredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorRequest;

class DescribePredictorRequestPrivate : public ForecastRequestPrivate {

public:
    DescribePredictorRequestPrivate(const ForecastRequest::Action action,
                                   DescribePredictorRequest * const q);
    DescribePredictorRequestPrivate(const DescribePredictorRequestPrivate &other,
                                   DescribePredictorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
