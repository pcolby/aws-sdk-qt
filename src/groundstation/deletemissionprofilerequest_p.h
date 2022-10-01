// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMISSIONPROFILEREQUEST_P_H
#define QTAWS_DELETEMISSIONPROFILEREQUEST_P_H

#include "groundstationrequest_p.h"
#include "deletemissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteMissionProfileRequest;

class DeleteMissionProfileRequestPrivate : public GroundStationRequestPrivate {

public:
    DeleteMissionProfileRequestPrivate(const GroundStationRequest::Action action,
                                   DeleteMissionProfileRequest * const q);
    DeleteMissionProfileRequestPrivate(const DeleteMissionProfileRequestPrivate &other,
                                   DeleteMissionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
