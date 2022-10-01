// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBREQUEST_P_H
#define QTAWS_CANCELSIMULATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "cancelsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobRequest;

class CancelSimulationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CancelSimulationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CancelSimulationJobRequest * const q);
    CancelSimulationJobRequestPrivate(const CancelSimulationJobRequestPrivate &other,
                                   CancelSimulationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
