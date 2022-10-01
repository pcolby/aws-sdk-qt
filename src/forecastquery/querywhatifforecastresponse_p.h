// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYWHATIFFORECASTRESPONSE_P_H
#define QTAWS_QUERYWHATIFFORECASTRESPONSE_P_H

#include "forecastqueryresponse_p.h"

namespace QtAws {
namespace ForecastQuery {

class QueryWhatIfForecastResponse;

class QueryWhatIfForecastResponsePrivate : public ForecastQueryResponsePrivate {

public:

    explicit QueryWhatIfForecastResponsePrivate(QueryWhatIfForecastResponse * const q);

    void parseQueryWhatIfForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryWhatIfForecastResponse)
    Q_DISABLE_COPY(QueryWhatIfForecastResponsePrivate)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
