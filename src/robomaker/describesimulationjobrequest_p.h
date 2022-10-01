// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBESIMULATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describesimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobRequest;

class DescribeSimulationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeSimulationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeSimulationJobRequest * const q);
    DescribeSimulationJobRequestPrivate(const DescribeSimulationJobRequestPrivate &other,
                                   DescribeSimulationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
