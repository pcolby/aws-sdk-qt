// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTSRESPONSE_P_H
#define QTAWS_LISTWHATIFFORECASTSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastsResponse;

class ListWhatIfForecastsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListWhatIfForecastsResponsePrivate(ListWhatIfForecastsResponse * const q);

    void parseListWhatIfForecastsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWhatIfForecastsResponse)
    Q_DISABLE_COPY(ListWhatIfForecastsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
