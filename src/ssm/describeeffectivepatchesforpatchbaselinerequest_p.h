// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINEREQUEST_P_H
#define QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeeffectivepatchesforpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectivePatchesForPatchBaselineRequest;

class DescribeEffectivePatchesForPatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    DescribeEffectivePatchesForPatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   DescribeEffectivePatchesForPatchBaselineRequest * const q);
    DescribeEffectivePatchesForPatchBaselineRequestPrivate(const DescribeEffectivePatchesForPatchBaselineRequestPrivate &other,
                                   DescribeEffectivePatchesForPatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEffectivePatchesForPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
