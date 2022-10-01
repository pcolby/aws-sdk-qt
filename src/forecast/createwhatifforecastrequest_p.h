// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTREQUEST_P_H
#define QTAWS_CREATEWHATIFFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "createwhatifforecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastRequest;

class CreateWhatIfForecastRequestPrivate : public ForecastRequestPrivate {

public:
    CreateWhatIfForecastRequestPrivate(const ForecastRequest::Action action,
                                   CreateWhatIfForecastRequest * const q);
    CreateWhatIfForecastRequestPrivate(const CreateWhatIfForecastRequestPrivate &other,
                                   CreateWhatIfForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
