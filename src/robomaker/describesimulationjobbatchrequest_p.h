// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBBATCHREQUEST_P_H
#define QTAWS_DESCRIBESIMULATIONJOBBATCHREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describesimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobBatchRequest;

class DescribeSimulationJobBatchRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeSimulationJobBatchRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeSimulationJobBatchRequest * const q);
    DescribeSimulationJobBatchRequestPrivate(const DescribeSimulationJobBatchRequestPrivate &other,
                                   DescribeSimulationJobBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
