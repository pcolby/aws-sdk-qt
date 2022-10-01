// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPATCHBASELINEREQUEST_P_H
#define QTAWS_CREATEPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "createpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class CreatePatchBaselineRequest;

class CreatePatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    CreatePatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   CreatePatchBaselineRequest * const q);
    CreatePatchBaselineRequestPrivate(const CreatePatchBaselineRequestPrivate &other,
                                   CreatePatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
