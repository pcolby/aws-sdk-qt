// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTJOBREQUEST_P_H
#define QTAWS_DESCRIBEDEPLOYMENTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describedeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeDeploymentJobRequest;

class DescribeDeploymentJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeDeploymentJobRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeDeploymentJobRequest * const q);
    DescribeDeploymentJobRequestPrivate(const DescribeDeploymentJobRequestPrivate &other,
                                   DescribeDeploymentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
