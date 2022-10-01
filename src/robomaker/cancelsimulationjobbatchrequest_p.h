// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBBATCHREQUEST_P_H
#define QTAWS_CANCELSIMULATIONJOBBATCHREQUEST_P_H

#include "robomakerrequest_p.h"
#include "cancelsimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobBatchRequest;

class CancelSimulationJobBatchRequestPrivate : public RoboMakerRequestPrivate {

public:
    CancelSimulationJobBatchRequestPrivate(const RoboMakerRequest::Action action,
                                   CancelSimulationJobBatchRequest * const q);
    CancelSimulationJobBatchRequestPrivate(const CancelSimulationJobBatchRequestPrivate &other,
                                   CancelSimulationJobBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
