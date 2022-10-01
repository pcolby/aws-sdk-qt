// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBESIMULATIONJOBREQUEST_P_H
#define QTAWS_BATCHDESCRIBESIMULATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "batchdescribesimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDescribeSimulationJobRequest;

class BatchDescribeSimulationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    BatchDescribeSimulationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   BatchDescribeSimulationJobRequest * const q);
    BatchDescribeSimulationJobRequestPrivate(const BatchDescribeSimulationJobRequestPrivate &other,
                                   BatchDescribeSimulationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDescribeSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
