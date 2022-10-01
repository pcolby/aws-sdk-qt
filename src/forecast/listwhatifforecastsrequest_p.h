// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTSREQUEST_P_H
#define QTAWS_LISTWHATIFFORECASTSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listwhatifforecastsrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastsRequest;

class ListWhatIfForecastsRequestPrivate : public ForecastRequestPrivate {

public:
    ListWhatIfForecastsRequestPrivate(const ForecastRequest::Action action,
                                   ListWhatIfForecastsRequest * const q);
    ListWhatIfForecastsRequestPrivate(const ListWhatIfForecastsRequestPrivate &other,
                                   ListWhatIfForecastsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWhatIfForecastsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
