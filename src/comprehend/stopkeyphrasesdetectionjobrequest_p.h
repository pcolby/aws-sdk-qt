// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPKEYPHRASESDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPKEYPHRASESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stopkeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopKeyPhrasesDetectionJobRequest;

class StopKeyPhrasesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopKeyPhrasesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopKeyPhrasesDetectionJobRequest * const q);
    StopKeyPhrasesDetectionJobRequestPrivate(const StopKeyPhrasesDetectionJobRequestPrivate &other,
                                   StopKeyPhrasesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
