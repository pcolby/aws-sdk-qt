// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTEXPORTRESPONSE_P_H
#define QTAWS_DESCRIBEWHATIFFORECASTEXPORTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastExportResponse;

class DescribeWhatIfForecastExportResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeWhatIfForecastExportResponsePrivate(DescribeWhatIfForecastExportResponse * const q);

    void parseDescribeWhatIfForecastExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfForecastExportResponse)
    Q_DISABLE_COPY(DescribeWhatIfForecastExportResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
