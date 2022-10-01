// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_P_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putdeliverabilitydashboardoptionrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDeliverabilityDashboardOptionRequest;

class PutDeliverabilityDashboardOptionRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutDeliverabilityDashboardOptionRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutDeliverabilityDashboardOptionRequest * const q);
    PutDeliverabilityDashboardOptionRequestPrivate(const PutDeliverabilityDashboardOptionRequestPrivate &other,
                                   PutDeliverabilityDashboardOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDeliverabilityDashboardOptionRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
