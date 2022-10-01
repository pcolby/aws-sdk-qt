// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYDATERANGEKPIREQUEST_P_H
#define QTAWS_GETJOURNEYDATERANGEKPIREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getjourneydaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyDateRangeKpiRequest;

class GetJourneyDateRangeKpiRequestPrivate : public PinpointRequestPrivate {

public:
    GetJourneyDateRangeKpiRequestPrivate(const PinpointRequest::Action action,
                                   GetJourneyDateRangeKpiRequest * const q);
    GetJourneyDateRangeKpiRequestPrivate(const GetJourneyDateRangeKpiRequestPrivate &other,
                                   GetJourneyDateRangeKpiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJourneyDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
