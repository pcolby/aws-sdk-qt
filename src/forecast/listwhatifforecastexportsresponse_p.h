// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTEXPORTSRESPONSE_P_H
#define QTAWS_LISTWHATIFFORECASTEXPORTSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastExportsResponse;

class ListWhatIfForecastExportsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListWhatIfForecastExportsResponsePrivate(ListWhatIfForecastExportsResponse * const q);

    void parseListWhatIfForecastExportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWhatIfForecastExportsResponse)
    Q_DISABLE_COPY(ListWhatIfForecastExportsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
