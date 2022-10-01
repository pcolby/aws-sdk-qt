// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORSREQUEST_P_H
#define QTAWS_LISTMONITORSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listmonitorsrequest.h"

namespace QtAws {
namespace Forecast {

class ListMonitorsRequest;

class ListMonitorsRequestPrivate : public ForecastRequestPrivate {

public:
    ListMonitorsRequestPrivate(const ForecastRequest::Action action,
                                   ListMonitorsRequest * const q);
    ListMonitorsRequestPrivate(const ListMonitorsRequestPrivate &other,
                                   ListMonitorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMonitorsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
