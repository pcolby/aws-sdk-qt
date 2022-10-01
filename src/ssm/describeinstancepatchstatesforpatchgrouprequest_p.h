// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinstancepatchstatesforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesForPatchGroupRequest;

class DescribeInstancePatchStatesForPatchGroupRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInstancePatchStatesForPatchGroupRequestPrivate(const SsmRequest::Action action,
                                   DescribeInstancePatchStatesForPatchGroupRequest * const q);
    DescribeInstancePatchStatesForPatchGroupRequestPrivate(const DescribeInstancePatchStatesForPatchGroupRequestPrivate &other,
                                   DescribeInstancePatchStatesForPatchGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchStatesForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
