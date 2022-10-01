// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPOLICYREQUEST_P_H
#define QTAWS_DELETEROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleterolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePolicyRequest;

class DeleteRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    DeleteRolePolicyRequestPrivate(const IamRequest::Action action,
                                   DeleteRolePolicyRequest * const q);
    DeleteRolePolicyRequestPrivate(const DeleteRolePolicyRequestPrivate &other,
                                   DeleteRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
