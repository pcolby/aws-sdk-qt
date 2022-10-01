// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONJOBREQUEST_P_H
#define QTAWS_CREATESIMULATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationJobRequest;

class CreateSimulationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateSimulationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateSimulationJobRequest * const q);
    CreateSimulationJobRequestPrivate(const CreateSimulationJobRequestPrivate &other,
                                   CreateSimulationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
