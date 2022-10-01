// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTKEYPHRASESDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTKEYPHRASESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startkeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartKeyPhrasesDetectionJobRequest;

class StartKeyPhrasesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartKeyPhrasesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartKeyPhrasesDetectionJobRequest * const q);
    StartKeyPhrasesDetectionJobRequestPrivate(const StartKeyPhrasesDetectionJobRequestPrivate &other,
                                   StartKeyPhrasesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
