// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONREQUEST_P_H
#define QTAWS_CREATESIMULATIONAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createsimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationRequest;

class CreateSimulationApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateSimulationApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateSimulationApplicationRequest * const q);
    CreateSimulationApplicationRequestPrivate(const CreateSimulationApplicationRequestPrivate &other,
                                   CreateSimulationApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
