// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinstancepatchstatesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesRequest;

class DescribeInstancePatchStatesRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInstancePatchStatesRequestPrivate(const SsmRequest::Action action,
                                   DescribeInstancePatchStatesRequest * const q);
    DescribeInstancePatchStatesRequestPrivate(const DescribeInstancePatchStatesRequestPrivate &other,
                                   DescribeInstancePatchStatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchStatesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
