// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTREQUEST_P_H
#define QTAWS_CREATEFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "createforecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastRequest;

class CreateForecastRequestPrivate : public ForecastRequestPrivate {

public:
    CreateForecastRequestPrivate(const ForecastRequest::Action action,
                                   CreateForecastRequest * const q);
    CreateForecastRequestPrivate(const CreateForecastRequestPrivate &other,
                                   CreateForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
