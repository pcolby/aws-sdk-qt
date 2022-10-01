// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTSREQUEST_P_H
#define QTAWS_LISTFORECASTSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listforecastsrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastsRequest;

class ListForecastsRequestPrivate : public ForecastRequestPrivate {

public:
    ListForecastsRequestPrivate(const ForecastRequest::Action action,
                                   ListForecastsRequest * const q);
    ListForecastsRequestPrivate(const ListForecastsRequestPrivate &other,
                                   ListForecastsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListForecastsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
