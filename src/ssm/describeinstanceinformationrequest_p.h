// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEINFORMATIONREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEINFORMATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinstanceinformationrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceInformationRequest;

class DescribeInstanceInformationRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInstanceInformationRequestPrivate(const SsmRequest::Action action,
                                   DescribeInstanceInformationRequest * const q);
    DescribeInstanceInformationRequestPrivate(const DescribeInstanceInformationRequestPrivate &other,
                                   DescribeInstanceInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceInformationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
