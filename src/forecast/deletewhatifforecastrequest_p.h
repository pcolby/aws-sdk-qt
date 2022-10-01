// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTREQUEST_P_H
#define QTAWS_DELETEWHATIFFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletewhatifforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastRequest;

class DeleteWhatIfForecastRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteWhatIfForecastRequestPrivate(const ForecastRequest::Action action,
                                   DeleteWhatIfForecastRequest * const q);
    DeleteWhatIfForecastRequestPrivate(const DeleteWhatIfForecastRequestPrivate &other,
                                   DeleteWhatIfForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
