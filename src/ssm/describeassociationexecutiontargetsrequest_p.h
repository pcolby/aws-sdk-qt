// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeassociationexecutiontargetsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionTargetsRequest;

class DescribeAssociationExecutionTargetsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAssociationExecutionTargetsRequestPrivate(const SsmRequest::Action action,
                                   DescribeAssociationExecutionTargetsRequest * const q);
    DescribeAssociationExecutionTargetsRequestPrivate(const DescribeAssociationExecutionTargetsRequestPrivate &other,
                                   DescribeAssociationExecutionTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationExecutionTargetsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
