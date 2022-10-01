// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORSREQUEST_P_H
#define QTAWS_LISTPREDICTORSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listpredictorsrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorsRequest;

class ListPredictorsRequestPrivate : public ForecastRequestPrivate {

public:
    ListPredictorsRequestPrivate(const ForecastRequest::Action action,
                                   ListPredictorsRequest * const q);
    ListPredictorsRequestPrivate(const ListPredictorsRequestPrivate &other,
                                   ListPredictorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPredictorsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
