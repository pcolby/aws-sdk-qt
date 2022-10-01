// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORREQUEST_P_H
#define QTAWS_DELETEMONITORREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletemonitorrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteMonitorRequest;

class DeleteMonitorRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteMonitorRequestPrivate(const ForecastRequest::Action action,
                                   DeleteMonitorRequest * const q);
    DeleteMonitorRequestPrivate(const DeleteMonitorRequestPrivate &other,
                                   DeleteMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
