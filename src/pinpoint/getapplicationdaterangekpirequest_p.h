// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONDATERANGEKPIREQUEST_P_H
#define QTAWS_GETAPPLICATIONDATERANGEKPIREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapplicationdaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationDateRangeKpiRequest;

class GetApplicationDateRangeKpiRequestPrivate : public PinpointRequestPrivate {

public:
    GetApplicationDateRangeKpiRequestPrivate(const PinpointRequest::Action action,
                                   GetApplicationDateRangeKpiRequest * const q);
    GetApplicationDateRangeKpiRequestPrivate(const GetApplicationDateRangeKpiRequestPrivate &other,
                                   GetApplicationDateRangeKpiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
