// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEREQUEST_P_H
#define QTAWS_DELETEROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "deleterolerequest.h"

namespace QtAws {
namespace Iam {

class DeleteRoleRequest;

class DeleteRoleRequestPrivate : public IamRequestPrivate {

public:
    DeleteRoleRequestPrivate(const IamRequest::Action action,
                                   DeleteRoleRequest * const q);
    DeleteRoleRequestPrivate(const DeleteRoleRequestPrivate &other,
                                   DeleteRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
