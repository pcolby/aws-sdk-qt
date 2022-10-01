// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOLICYREQUEST_P_H
#define QTAWS_DELETEUSERPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserPolicyRequest;

class DeleteUserPolicyRequestPrivate : public IamRequestPrivate {

public:
    DeleteUserPolicyRequestPrivate(const IamRequest::Action action,
                                   DeleteUserPolicyRequest * const q);
    DeleteUserPolicyRequestPrivate(const DeleteUserPolicyRequestPrivate &other,
                                   DeleteUserPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
