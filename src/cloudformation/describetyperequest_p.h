// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPEREQUEST_P_H
#define QTAWS_DESCRIBETYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describetyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeRequest;

class DescribeTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeTypeRequest * const q);
    DescribeTypeRequestPrivate(const DescribeTypeRequestPrivate &other,
                                   DescribeTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
