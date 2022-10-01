// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartEntitiesDetectionJobRequest;

class StartEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartEntitiesDetectionJobRequest * const q);
    StartEntitiesDetectionJobRequestPrivate(const StartEntitiesDetectionJobRequestPrivate &other,
                                   StartEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
