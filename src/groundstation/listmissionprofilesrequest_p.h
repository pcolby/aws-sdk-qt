// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMISSIONPROFILESREQUEST_P_H
#define QTAWS_LISTMISSIONPROFILESREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listmissionprofilesrequest.h"

namespace QtAws {
namespace GroundStation {

class ListMissionProfilesRequest;

class ListMissionProfilesRequestPrivate : public GroundStationRequestPrivate {

public:
    ListMissionProfilesRequestPrivate(const GroundStationRequest::Action action,
                                   ListMissionProfilesRequest * const q);
    ListMissionProfilesRequestPrivate(const ListMissionProfilesRequestPrivate &other,
                                   ListMissionProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMissionProfilesRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
