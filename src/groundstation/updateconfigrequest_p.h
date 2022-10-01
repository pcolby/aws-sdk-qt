// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGREQUEST_P_H
#define QTAWS_UPDATECONFIGREQUEST_P_H

#include "groundstationrequest_p.h"
#include "updateconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateConfigRequest;

class UpdateConfigRequestPrivate : public GroundStationRequestPrivate {

public:
    UpdateConfigRequestPrivate(const GroundStationRequest::Action action,
                                   UpdateConfigRequest * const q);
    UpdateConfigRequestPrivate(const UpdateConfigRequestPrivate &other,
                                   UpdateConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
