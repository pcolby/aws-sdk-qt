// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H
#define QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H

#include "ssmrequest_p.h"
#include "deregisterpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterPatchBaselineForPatchGroupRequest;

class DeregisterPatchBaselineForPatchGroupRequestPrivate : public SsmRequestPrivate {

public:
    DeregisterPatchBaselineForPatchGroupRequestPrivate(const SsmRequest::Action action,
                                   DeregisterPatchBaselineForPatchGroupRequest * const q);
    DeregisterPatchBaselineForPatchGroupRequestPrivate(const DeregisterPatchBaselineForPatchGroupRequestPrivate &other,
                                   DeregisterPatchBaselineForPatchGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
