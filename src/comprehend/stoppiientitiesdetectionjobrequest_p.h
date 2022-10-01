// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIIENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPPIIENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stoppiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopPiiEntitiesDetectionJobRequest;

class StopPiiEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopPiiEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopPiiEntitiesDetectionJobRequest * const q);
    StopPiiEntitiesDetectionJobRequestPrivate(const StopPiiEntitiesDetectionJobRequestPrivate &other,
                                   StopPiiEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopPiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
