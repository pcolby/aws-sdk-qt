// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYFORECASTRESPONSE_P_H
#define QTAWS_QUERYFORECASTRESPONSE_P_H

#include "forecastqueryresponse_p.h"

namespace QtAws {
namespace ForecastQuery {

class QueryForecastResponse;

class QueryForecastResponsePrivate : public ForecastQueryResponsePrivate {

public:

    explicit QueryForecastResponsePrivate(QueryForecastResponse * const q);

    void parseQueryForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryForecastResponse)
    Q_DISABLE_COPY(QueryForecastResponsePrivate)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
