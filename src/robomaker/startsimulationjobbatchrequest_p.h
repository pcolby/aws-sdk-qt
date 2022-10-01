// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIMULATIONJOBBATCHREQUEST_P_H
#define QTAWS_STARTSIMULATIONJOBBATCHREQUEST_P_H

#include "robomakerrequest_p.h"
#include "startsimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class StartSimulationJobBatchRequest;

class StartSimulationJobBatchRequestPrivate : public RoboMakerRequestPrivate {

public:
    StartSimulationJobBatchRequestPrivate(const RoboMakerRequest::Action action,
                                   StartSimulationJobBatchRequest * const q);
    StartSimulationJobBatchRequestPrivate(const StartSimulationJobBatchRequestPrivate &other,
                                   StartSimulationJobBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
