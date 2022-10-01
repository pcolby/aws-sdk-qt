// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSATELLITESREQUEST_P_H
#define QTAWS_LISTSATELLITESREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listsatellitesrequest.h"

namespace QtAws {
namespace GroundStation {

class ListSatellitesRequest;

class ListSatellitesRequestPrivate : public GroundStationRequestPrivate {

public:
    ListSatellitesRequestPrivate(const GroundStationRequest::Action action,
                                   ListSatellitesRequest * const q);
    ListSatellitesRequestPrivate(const ListSatellitesRequestPrivate &other,
                                   ListSatellitesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSatellitesRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
