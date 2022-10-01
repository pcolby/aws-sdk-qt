// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCURACYMETRICSRESPONSE_P_H
#define QTAWS_GETACCURACYMETRICSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class GetAccuracyMetricsResponse;

class GetAccuracyMetricsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit GetAccuracyMetricsResponsePrivate(GetAccuracyMetricsResponse * const q);

    void parseGetAccuracyMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccuracyMetricsResponse)
    Q_DISABLE_COPY(GetAccuracyMetricsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
