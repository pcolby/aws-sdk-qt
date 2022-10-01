// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEVENTSDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPEVENTSDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stopeventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEventsDetectionJobRequest;

class StopEventsDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopEventsDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopEventsDetectionJobRequest * const q);
    StopEventsDetectionJobRequestPrivate(const StopEventsDetectionJobRequestPrivate &other,
                                   StopEventsDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEventsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
