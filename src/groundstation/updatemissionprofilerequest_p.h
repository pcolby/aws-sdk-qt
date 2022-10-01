// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMISSIONPROFILEREQUEST_P_H
#define QTAWS_UPDATEMISSIONPROFILEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "updatemissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateMissionProfileRequest;

class UpdateMissionProfileRequestPrivate : public GroundStationRequestPrivate {

public:
    UpdateMissionProfileRequestPrivate(const GroundStationRequest::Action action,
                                   UpdateMissionProfileRequest * const q);
    UpdateMissionProfileRequestPrivate(const UpdateMissionProfileRequestPrivate &other,
                                   UpdateMissionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
