// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTSENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartSentimentDetectionJobRequest;

class StartSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartSentimentDetectionJobRequest * const q);
    StartSentimentDetectionJobRequestPrivate(const StartSentimentDetectionJobRequestPrivate &other,
                                   StartSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
