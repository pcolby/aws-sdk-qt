// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMISSIONPROFILEREQUEST_P_H
#define QTAWS_CREATEMISSIONPROFILEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "createmissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class CreateMissionProfileRequest;

class CreateMissionProfileRequestPrivate : public GroundStationRequestPrivate {

public:
    CreateMissionProfileRequestPrivate(const GroundStationRequest::Action action,
                                   CreateMissionProfileRequest * const q);
    CreateMissionProfileRequestPrivate(const CreateMissionProfileRequestPrivate &other,
                                   CreateMissionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
