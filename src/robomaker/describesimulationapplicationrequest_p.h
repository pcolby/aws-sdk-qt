// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBESIMULATIONAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationApplicationRequest;

class DescribeSimulationApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeSimulationApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeSimulationApplicationRequest * const q);
    DescribeSimulationApplicationRequestPrivate(const DescribeSimulationApplicationRequestPrivate &other,
                                   DescribeSimulationApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
