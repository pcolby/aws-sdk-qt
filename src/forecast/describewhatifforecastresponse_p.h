// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTRESPONSE_P_H
#define QTAWS_DESCRIBEWHATIFFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastResponse;

class DescribeWhatIfForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeWhatIfForecastResponsePrivate(DescribeWhatIfForecastResponse * const q);

    void parseDescribeWhatIfForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfForecastResponse)
    Q_DISABLE_COPY(DescribeWhatIfForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
