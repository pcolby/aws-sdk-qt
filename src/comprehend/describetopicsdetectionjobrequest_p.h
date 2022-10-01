// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETOPICSDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBETOPICSDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describetopicsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTopicsDetectionJobRequest;

class DescribeTopicsDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeTopicsDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeTopicsDetectionJobRequest * const q);
    DescribeTopicsDetectionJobRequestPrivate(const DescribeTopicsDetectionJobRequestPrivate &other,
                                   DescribeTopicsDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTopicsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
