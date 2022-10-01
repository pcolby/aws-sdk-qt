// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_P_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdeliverabilitydashboardoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityDashboardOptionsRequest;

class GetDeliverabilityDashboardOptionsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDeliverabilityDashboardOptionsRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDeliverabilityDashboardOptionsRequest * const q);
    GetDeliverabilityDashboardOptionsRequestPrivate(const GetDeliverabilityDashboardOptionsRequestPrivate &other,
                                   GetDeliverabilityDashboardOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityDashboardOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
