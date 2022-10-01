// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTSIMULATIONJOBREQUEST_P_H
#define QTAWS_RESTARTSIMULATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "restartsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class RestartSimulationJobRequest;

class RestartSimulationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    RestartSimulationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   RestartSimulationJobRequest * const q);
    RestartSimulationJobRequestPrivate(const RestartSimulationJobRequestPrivate &other,
                                   RestartSimulationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestartSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
