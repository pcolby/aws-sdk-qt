// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_P_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_P_H

#include "sesv2request_p.h"
#include "putdeliverabilitydashboardoptionrequest.h"

namespace QtAws {
namespace SESv2 {

class PutDeliverabilityDashboardOptionRequest;

class PutDeliverabilityDashboardOptionRequestPrivate : public SESv2RequestPrivate {

public:
    PutDeliverabilityDashboardOptionRequestPrivate(const SESv2Request::Action action,
                                   PutDeliverabilityDashboardOptionRequest * const q);
    PutDeliverabilityDashboardOptionRequestPrivate(const PutDeliverabilityDashboardOptionRequestPrivate &other,
                                   PutDeliverabilityDashboardOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDeliverabilityDashboardOptionRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
