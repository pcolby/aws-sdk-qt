// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTJOBREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createdeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateDeploymentJobRequest;

class CreateDeploymentJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateDeploymentJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateDeploymentJobRequest * const q);
    CreateDeploymentJobRequestPrivate(const CreateDeploymentJobRequestPrivate &other,
                                   CreateDeploymentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
