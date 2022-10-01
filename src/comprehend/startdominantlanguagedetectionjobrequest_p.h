// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startdominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartDominantLanguageDetectionJobRequest;

class StartDominantLanguageDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartDominantLanguageDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartDominantLanguageDetectionJobRequest * const q);
    StartDominantLanguageDetectionJobRequestPrivate(const StartDominantLanguageDetectionJobRequestPrivate &other,
                                   StartDominantLanguageDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDominantLanguageDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
