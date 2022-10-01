// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIIENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTPIIENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startpiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartPiiEntitiesDetectionJobRequest;

class StartPiiEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartPiiEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartPiiEntitiesDetectionJobRequest * const q);
    StartPiiEntitiesDetectionJobRequestPrivate(const StartPiiEntitiesDetectionJobRequestPrivate &other,
                                   StartPiiEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
