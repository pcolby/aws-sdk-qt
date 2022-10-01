// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTRESPONSE_P_H
#define QTAWS_DESCRIBEFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastResponse;

class DescribeForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeForecastResponsePrivate(DescribeForecastResponse * const q);

    void parseDescribeForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeForecastResponse)
    Q_DISABLE_COPY(DescribeForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
