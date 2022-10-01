// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "describepredictorbacktestexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorBacktestExportJobRequest;

class DescribePredictorBacktestExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    DescribePredictorBacktestExportJobRequestPrivate(const ForecastRequest::Action action,
                                   DescribePredictorBacktestExportJobRequest * const q);
    DescribePredictorBacktestExportJobRequestPrivate(const DescribePredictorBacktestExportJobRequestPrivate &other,
                                   DescribePredictorBacktestExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePredictorBacktestExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
