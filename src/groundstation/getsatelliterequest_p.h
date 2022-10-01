// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSATELLITEREQUEST_P_H
#define QTAWS_GETSATELLITEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "getsatelliterequest.h"

namespace QtAws {
namespace GroundStation {

class GetSatelliteRequest;

class GetSatelliteRequestPrivate : public GroundStationRequestPrivate {

public:
    GetSatelliteRequestPrivate(const GroundStationRequest::Action action,
                                   GetSatelliteRequest * const q);
    GetSatelliteRequestPrivate(const GetSatelliteRequestPrivate &other,
                                   GetSatelliteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSatelliteRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
