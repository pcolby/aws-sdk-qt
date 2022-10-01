// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEVENTSDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTEVENTSDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "starteventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartEventsDetectionJobRequest;

class StartEventsDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartEventsDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartEventsDetectionJobRequest * const q);
    StartEventsDetectionJobRequestPrivate(const StartEventsDetectionJobRequestPrivate &other,
                                   StartEventsDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartEventsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
