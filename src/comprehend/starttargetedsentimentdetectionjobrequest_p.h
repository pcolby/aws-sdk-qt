// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "starttargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTargetedSentimentDetectionJobRequest;

class StartTargetedSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartTargetedSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartTargetedSentimentDetectionJobRequest * const q);
    StartTargetedSentimentDetectionJobRequestPrivate(const StartTargetedSentimentDetectionJobRequestPrivate &other,
                                   StartTargetedSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTargetedSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
