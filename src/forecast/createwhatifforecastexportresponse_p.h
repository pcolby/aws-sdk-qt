// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTEXPORTRESPONSE_P_H
#define QTAWS_CREATEWHATIFFORECASTEXPORTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastExportResponse;

class CreateWhatIfForecastExportResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateWhatIfForecastExportResponsePrivate(CreateWhatIfForecastExportResponse * const q);

    void parseCreateWhatIfForecastExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfForecastExportResponse)
    Q_DISABLE_COPY(CreateWhatIfForecastExportResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
