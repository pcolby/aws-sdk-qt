// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stopdominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopDominantLanguageDetectionJobRequest;

class StopDominantLanguageDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StopDominantLanguageDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   StopDominantLanguageDetectionJobRequest * const q);
    StopDominantLanguageDetectionJobRequestPrivate(const StopDominantLanguageDetectionJobRequestPrivate &other,
                                   StopDominantLanguageDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDominantLanguageDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
