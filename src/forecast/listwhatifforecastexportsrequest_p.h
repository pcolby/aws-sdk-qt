// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTEXPORTSREQUEST_P_H
#define QTAWS_LISTWHATIFFORECASTEXPORTSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listwhatifforecastexportsrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastExportsRequest;

class ListWhatIfForecastExportsRequestPrivate : public ForecastRequestPrivate {

public:
    ListWhatIfForecastExportsRequestPrivate(const ForecastRequest::Action action,
                                   ListWhatIfForecastExportsRequest * const q);
    ListWhatIfForecastExportsRequestPrivate(const ListWhatIfForecastExportsRequestPrivate &other,
                                   ListWhatIfForecastExportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWhatIfForecastExportsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
