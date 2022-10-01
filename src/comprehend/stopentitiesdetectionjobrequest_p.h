// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stopentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEntitiesDetectionJobRequest;

class StopEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopEntitiesDetectionJobRequest * const q);
    StopEntitiesDetectionJobRequestPrivate(const StopEntitiesDetectionJobRequestPrivate &other,
                                   StopEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
