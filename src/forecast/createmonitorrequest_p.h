// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORREQUEST_P_H
#define QTAWS_CREATEMONITORREQUEST_P_H

#include "forecastrequest_p.h"
#include "createmonitorrequest.h"

namespace QtAws {
namespace Forecast {

class CreateMonitorRequest;

class CreateMonitorRequestPrivate : public ForecastRequestPrivate {

public:
    CreateMonitorRequestPrivate(const ForecastRequest::Action action,
                                   CreateMonitorRequest * const q);
    CreateMonitorRequestPrivate(const CreateMonitorRequestPrivate &other,
                                   CreateMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
