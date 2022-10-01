// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTOPICSDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTTOPICSDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "starttopicsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTopicsDetectionJobRequest;

class StartTopicsDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartTopicsDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartTopicsDetectionJobRequest * const q);
    StartTopicsDetectionJobRequestPrivate(const StartTopicsDetectionJobRequestPrivate &other,
                                   StartTopicsDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTopicsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
