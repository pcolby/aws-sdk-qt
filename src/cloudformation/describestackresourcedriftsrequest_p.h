// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEDRIFTSREQUEST_P_H
#define QTAWS_DESCRIBESTACKRESOURCEDRIFTSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackresourcedriftsrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceDriftsRequest;

class DescribeStackResourceDriftsRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackResourceDriftsRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackResourceDriftsRequest * const q);
    DescribeStackResourceDriftsRequestPrivate(const DescribeStackResourceDriftsRequestPrivate &other,
                                   DescribeStackResourceDriftsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackResourceDriftsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
