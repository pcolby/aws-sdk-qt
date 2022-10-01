// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H
#define QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H

#include "ssmrequest_p.h"
#include "registerpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class RegisterPatchBaselineForPatchGroupRequest;

class RegisterPatchBaselineForPatchGroupRequestPrivate : public SsmRequestPrivate {

public:
    RegisterPatchBaselineForPatchGroupRequestPrivate(const SsmRequest::Action action,
                                   RegisterPatchBaselineForPatchGroupRequest * const q);
    RegisterPatchBaselineForPatchGroupRequestPrivate(const RegisterPatchBaselineForPatchGroupRequestPrivate &other,
                                   RegisterPatchBaselineForPatchGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
