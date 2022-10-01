// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBESENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describesentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeSentimentDetectionJobRequest;

class DescribeSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeSentimentDetectionJobRequest * const q);
    DescribeSentimentDetectionJobRequestPrivate(const DescribeSentimentDetectionJobRequestPrivate &other,
                                   DescribeSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
