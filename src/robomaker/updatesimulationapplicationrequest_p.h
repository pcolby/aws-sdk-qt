// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIMULATIONAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATESIMULATIONAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "updatesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateSimulationApplicationRequest;

class UpdateSimulationApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    UpdateSimulationApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   UpdateSimulationApplicationRequest * const q);
    UpdateSimulationApplicationRequestPrivate(const UpdateSimulationApplicationRequestPrivate &other,
                                   UpdateSimulationApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
