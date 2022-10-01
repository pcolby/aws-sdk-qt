// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRESOURCEREQUEST_P_H
#define QTAWS_STOPRESOURCEREQUEST_P_H

#include "forecastrequest_p.h"
#include "stopresourcerequest.h"

namespace QtAws {
namespace Forecast {

class StopResourceRequest;

class StopResourceRequestPrivate : public ForecastRequestPrivate {

public:
    StopResourceRequestPrivate(const ForecastRequest::Action action,
                                   StopResourceRequest * const q);
    StopResourceRequestPrivate(const StopResourceRequestPrivate &other,
                                   StopResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopResourceRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
