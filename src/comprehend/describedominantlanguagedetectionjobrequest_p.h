// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describedominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDominantLanguageDetectionJobRequest;

class DescribeDominantLanguageDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeDominantLanguageDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeDominantLanguageDetectionJobRequest * const q);
    DescribeDominantLanguageDetectionJobRequestPrivate(const DescribeDominantLanguageDetectionJobRequestPrivate &other,
                                   DescribeDominantLanguageDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDominantLanguageDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
