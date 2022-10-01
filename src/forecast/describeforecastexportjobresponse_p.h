// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTEXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEFORECASTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastExportJobResponse;

class DescribeForecastExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeForecastExportJobResponsePrivate(DescribeForecastExportJobResponse * const q);

    void parseDescribeForecastExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeForecastExportJobResponse)
    Q_DISABLE_COPY(DescribeForecastExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
