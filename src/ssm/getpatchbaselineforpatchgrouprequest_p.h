// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEFORPATCHGROUPREQUEST_P_H
#define QTAWS_GETPATCHBASELINEFORPATCHGROUPREQUEST_P_H

#include "ssmrequest_p.h"
#include "getpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineForPatchGroupRequest;

class GetPatchBaselineForPatchGroupRequestPrivate : public SsmRequestPrivate {

public:
    GetPatchBaselineForPatchGroupRequestPrivate(const SsmRequest::Action action,
                                   GetPatchBaselineForPatchGroupRequest * const q);
    GetPatchBaselineForPatchGroupRequestPrivate(const GetPatchBaselineForPatchGroupRequestPrivate &other,
                                   GetPatchBaselineForPatchGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
