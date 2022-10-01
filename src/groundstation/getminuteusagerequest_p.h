// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMINUTEUSAGEREQUEST_P_H
#define QTAWS_GETMINUTEUSAGEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "getminuteusagerequest.h"

namespace QtAws {
namespace GroundStation {

class GetMinuteUsageRequest;

class GetMinuteUsageRequestPrivate : public GroundStationRequestPrivate {

public:
    GetMinuteUsageRequestPrivate(const GroundStationRequest::Action action,
                                   GetMinuteUsageRequest * const q);
    GetMinuteUsageRequestPrivate(const GetMinuteUsageRequestPrivate &other,
                                   GetMinuteUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMinuteUsageRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
