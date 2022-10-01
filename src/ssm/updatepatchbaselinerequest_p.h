// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPATCHBASELINEREQUEST_P_H
#define QTAWS_UPDATEPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatepatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class UpdatePatchBaselineRequest;

class UpdatePatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    UpdatePatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   UpdatePatchBaselineRequest * const q);
    UpdatePatchBaselineRequestPrivate(const UpdatePatchBaselineRequestPrivate &other,
                                   UpdatePatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
