// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackdriftdetectionstatusrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackDriftDetectionStatusRequest;

class DescribeStackDriftDetectionStatusRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackDriftDetectionStatusRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackDriftDetectionStatusRequest * const q);
    DescribeStackDriftDetectionStatusRequestPrivate(const DescribeStackDriftDetectionStatusRequestPrivate &other,
                                   DescribeStackDriftDetectionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackDriftDetectionStatusRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
