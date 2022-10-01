// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMISSIONPROFILEREQUEST_P_H
#define QTAWS_GETMISSIONPROFILEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "getmissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class GetMissionProfileRequest;

class GetMissionProfileRequestPrivate : public GroundStationRequestPrivate {

public:
    GetMissionProfileRequestPrivate(const GroundStationRequest::Action action,
                                   GetMissionProfileRequest * const q);
    GetMissionProfileRequestPrivate(const GetMissionProfileRequestPrivate &other,
                                   GetMissionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
