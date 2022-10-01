// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_P_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "getdeliverabilitydashboardoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityDashboardOptionsRequest;

class GetDeliverabilityDashboardOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    GetDeliverabilityDashboardOptionsRequestPrivate(const SESv2Request::Action action,
                                   GetDeliverabilityDashboardOptionsRequest * const q);
    GetDeliverabilityDashboardOptionsRequestPrivate(const GetDeliverabilityDashboardOptionsRequestPrivate &other,
                                   GetDeliverabilityDashboardOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityDashboardOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
