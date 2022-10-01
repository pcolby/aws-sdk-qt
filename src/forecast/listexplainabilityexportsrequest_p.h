// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITYEXPORTSREQUEST_P_H
#define QTAWS_LISTEXPLAINABILITYEXPORTSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listexplainabilityexportsrequest.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilityExportsRequest;

class ListExplainabilityExportsRequestPrivate : public ForecastRequestPrivate {

public:
    ListExplainabilityExportsRequestPrivate(const ForecastRequest::Action action,
                                   ListExplainabilityExportsRequest * const q);
    ListExplainabilityExportsRequestPrivate(const ListExplainabilityExportsRequestPrivate &other,
                                   ListExplainabilityExportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExplainabilityExportsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
