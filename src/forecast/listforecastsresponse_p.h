// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTSRESPONSE_P_H
#define QTAWS_LISTFORECASTSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListForecastsResponse;

class ListForecastsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListForecastsResponsePrivate(ListForecastsResponse * const q);

    void parseListForecastsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListForecastsResponse)
    Q_DISABLE_COPY(ListForecastsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
