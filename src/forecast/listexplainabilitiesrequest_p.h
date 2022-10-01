// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITIESREQUEST_P_H
#define QTAWS_LISTEXPLAINABILITIESREQUEST_P_H

#include "forecastrequest_p.h"
#include "listexplainabilitiesrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilitiesRequest;

class ListExplainabilitiesRequestPrivate : public ForecastRequestPrivate {

public:
    ListExplainabilitiesRequestPrivate(const ForecastRequest::Action action,
                                   ListExplainabilitiesRequest * const q);
    ListExplainabilitiesRequestPrivate(const ListExplainabilitiesRequestPrivate &other,
                                   ListExplainabilitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExplainabilitiesRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
