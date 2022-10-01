// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTEXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEFORECASTEXPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "describeforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastExportJobRequest;

class DescribeForecastExportJobRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeForecastExportJobRequestPrivate(const ForecastRequest::Action action,
                                   DescribeForecastExportJobRequest * const q);
    DescribeForecastExportJobRequestPrivate(const DescribeForecastExportJobRequestPrivate &other,
                                   DescribeForecastExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
