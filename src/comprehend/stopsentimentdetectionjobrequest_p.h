// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPSENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stopsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopSentimentDetectionJobRequest;

class StopSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopSentimentDetectionJobRequest * const q);
    StopSentimentDetectionJobRequestPrivate(const StopSentimentDetectionJobRequestPrivate &other,
                                   StopSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
