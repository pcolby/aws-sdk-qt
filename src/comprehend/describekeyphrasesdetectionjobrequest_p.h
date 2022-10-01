// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describekeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeKeyPhrasesDetectionJobRequest;

class DescribeKeyPhrasesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeKeyPhrasesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeKeyPhrasesDetectionJobRequest * const q);
    DescribeKeyPhrasesDetectionJobRequestPrivate(const DescribeKeyPhrasesDetectionJobRequestPrivate &other,
                                   DescribeKeyPhrasesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
