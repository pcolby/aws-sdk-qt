// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTEXPORTRESPONSE_P_H
#define QTAWS_DELETEWHATIFFORECASTEXPORTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastExportResponse;

class DeleteWhatIfForecastExportResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteWhatIfForecastExportResponsePrivate(DeleteWhatIfForecastExportResponse * const q);

    void parseDeleteWhatIfForecastExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfForecastExportResponse)
    Q_DISABLE_COPY(DeleteWhatIfForecastExportResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
