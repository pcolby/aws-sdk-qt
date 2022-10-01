// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCESREQUEST_P_H
#define QTAWS_DESCRIBESTACKRESOURCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackresourcesrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourcesRequest;

class DescribeStackResourcesRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackResourcesRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackResourcesRequest * const q);
    DescribeStackResourcesRequestPrivate(const DescribeStackResourcesRequestPrivate &other,
                                   DescribeStackResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackResourcesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
