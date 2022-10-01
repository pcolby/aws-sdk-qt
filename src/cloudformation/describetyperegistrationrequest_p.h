// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPEREGISTRATIONREQUEST_P_H
#define QTAWS_DESCRIBETYPEREGISTRATIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describetyperegistrationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeRegistrationRequest;

class DescribeTypeRegistrationRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeTypeRegistrationRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeTypeRegistrationRequest * const q);
    DescribeTypeRegistrationRequestPrivate(const DescribeTypeRegistrationRequestPrivate &other,
                                   DescribeTypeRegistrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTypeRegistrationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
