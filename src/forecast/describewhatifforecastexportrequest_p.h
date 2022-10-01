// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTEXPORTREQUEST_P_H
#define QTAWS_DESCRIBEWHATIFFORECASTEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "describewhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastExportRequest;

class DescribeWhatIfForecastExportRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeWhatIfForecastExportRequestPrivate(const ForecastRequest::Action action,
                                   DescribeWhatIfForecastExportRequest * const q);
    DescribeWhatIfForecastExportRequestPrivate(const DescribeWhatIfForecastExportRequestPrivate &other,
                                   DescribeWhatIfForecastExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
