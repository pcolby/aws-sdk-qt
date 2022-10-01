// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYFORECASTREQUEST_P_H
#define QTAWS_QUERYFORECASTREQUEST_P_H

#include "forecastqueryrequest_p.h"
#include "queryforecastrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryForecastRequest;

class QueryForecastRequestPrivate : public ForecastQueryRequestPrivate {

public:
    QueryForecastRequestPrivate(const ForecastQueryRequest::Action action,
                                   QueryForecastRequest * const q);
    QueryForecastRequestPrivate(const QueryForecastRequestPrivate &other,
                                   QueryForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryForecastRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
