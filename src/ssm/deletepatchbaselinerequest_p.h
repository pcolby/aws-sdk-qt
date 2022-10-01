// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPATCHBASELINEREQUEST_P_H
#define QTAWS_DELETEPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "deletepatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class DeletePatchBaselineRequest;

class DeletePatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    DeletePatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   DeletePatchBaselineRequest * const q);
    DeletePatchBaselineRequestPrivate(const DeletePatchBaselineRequestPrivate &other,
                                   DeletePatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
