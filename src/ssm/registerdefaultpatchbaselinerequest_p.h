// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEFAULTPATCHBASELINEREQUEST_P_H
#define QTAWS_REGISTERDEFAULTPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "registerdefaultpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class RegisterDefaultPatchBaselineRequest;

class RegisterDefaultPatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    RegisterDefaultPatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   RegisterDefaultPatchBaselineRequest * const q);
    RegisterDefaultPatchBaselineRequestPrivate(const RegisterDefaultPatchBaselineRequestPrivate &other,
                                   RegisterDefaultPatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDefaultPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
