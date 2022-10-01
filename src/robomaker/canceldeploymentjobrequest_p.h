// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTJOBREQUEST_P_H
#define QTAWS_CANCELDEPLOYMENTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "canceldeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelDeploymentJobRequest;

class CancelDeploymentJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CancelDeploymentJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CancelDeploymentJobRequest * const q);
    CancelDeploymentJobRequestPrivate(const CancelDeploymentJobRequestPrivate &other,
                                   CancelDeploymentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
