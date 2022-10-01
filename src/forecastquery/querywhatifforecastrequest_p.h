// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYWHATIFFORECASTREQUEST_P_H
#define QTAWS_QUERYWHATIFFORECASTREQUEST_P_H

#include "forecastqueryrequest_p.h"
#include "querywhatifforecastrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryWhatIfForecastRequest;

class QueryWhatIfForecastRequestPrivate : public ForecastQueryRequestPrivate {

public:
    QueryWhatIfForecastRequestPrivate(const ForecastQueryRequest::Action action,
                                   QueryWhatIfForecastRequest * const q);
    QueryWhatIfForecastRequestPrivate(const QueryWhatIfForecastRequestPrivate &other,
                                   QueryWhatIfForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryWhatIfForecastRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
