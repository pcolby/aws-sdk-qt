// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCDEPLOYMENTJOBREQUEST_P_H
#define QTAWS_SYNCDEPLOYMENTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "syncdeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class SyncDeploymentJobRequest;

class SyncDeploymentJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    SyncDeploymentJobRequestPrivate(const RoboMakerRequest::Action action,
                                   SyncDeploymentJobRequest * const q);
    SyncDeploymentJobRequestPrivate(const SyncDeploymentJobRequestPrivate &other,
                                   SyncDeploymentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(SyncDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
