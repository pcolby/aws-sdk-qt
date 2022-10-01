// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTREQUEST_P_H
#define QTAWS_DELETEFORECASTREQUEST_P_H

#include "forecastrequest_p.h"
#include "deleteforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastRequest;

class DeleteForecastRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteForecastRequestPrivate(const ForecastRequest::Action action,
                                   DeleteForecastRequest * const q);
    DeleteForecastRequestPrivate(const DeleteForecastRequestPrivate &other,
                                   DeleteForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
