// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHESREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinstancepatchesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchesRequest;

class DescribeInstancePatchesRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInstancePatchesRequestPrivate(const SsmRequest::Action action,
                                   DescribeInstancePatchesRequest * const q);
    DescribeInstancePatchesRequestPrivate(const DescribeInstancePatchesRequestPrivate &other,
                                   DescribeInstancePatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
