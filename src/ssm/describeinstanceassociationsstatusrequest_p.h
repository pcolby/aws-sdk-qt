// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinstanceassociationsstatusrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceAssociationsStatusRequest;

class DescribeInstanceAssociationsStatusRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInstanceAssociationsStatusRequestPrivate(const SsmRequest::Action action,
                                   DescribeInstanceAssociationsStatusRequest * const q);
    DescribeInstanceAssociationsStatusRequestPrivate(const DescribeInstanceAssociationsStatusRequestPrivate &other,
                                   DescribeInstanceAssociationsStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAssociationsStatusRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
