// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEREQUEST_P_H
#define QTAWS_DESCRIBESTACKRESOURCEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackresourcerequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceRequest;

class DescribeStackResourceRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackResourceRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackResourceRequest * const q);
    DescribeStackResourceRequestPrivate(const DescribeStackResourceRequestPrivate &other,
                                   DescribeStackResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackResourceRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
