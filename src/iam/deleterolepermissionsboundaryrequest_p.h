// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPERMISSIONSBOUNDARYREQUEST_P_H
#define QTAWS_DELETEROLEPERMISSIONSBOUNDARYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleterolepermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePermissionsBoundaryRequest;

class DeleteRolePermissionsBoundaryRequestPrivate : public IamRequestPrivate {

public:
    DeleteRolePermissionsBoundaryRequestPrivate(const IamRequest::Action action,
                                   DeleteRolePermissionsBoundaryRequest * const q);
    DeleteRolePermissionsBoundaryRequestPrivate(const DeleteRolePermissionsBoundaryRequestPrivate &other,
                                   DeleteRolePermissionsBoundaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRolePermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
