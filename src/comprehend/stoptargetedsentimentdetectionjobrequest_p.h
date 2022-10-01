// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stoptargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTargetedSentimentDetectionJobRequest;

class StopTargetedSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopTargetedSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopTargetedSentimentDetectionJobRequest * const q);
    StopTargetedSentimentDetectionJobRequestPrivate(const StopTargetedSentimentDetectionJobRequestPrivate &other,
                                   StopTargetedSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTargetedSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
