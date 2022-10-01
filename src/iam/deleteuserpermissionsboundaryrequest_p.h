// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPERMISSIONSBOUNDARYREQUEST_P_H
#define QTAWS_DELETEUSERPERMISSIONSBOUNDARYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteuserpermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserPermissionsBoundaryRequest;

class DeleteUserPermissionsBoundaryRequestPrivate : public IamRequestPrivate {

public:
    DeleteUserPermissionsBoundaryRequestPrivate(const IamRequest::Action action,
                                   DeleteUserPermissionsBoundaryRequest * const q);
    DeleteUserPermissionsBoundaryRequestPrivate(const DeleteUserPermissionsBoundaryRequestPrivate &other,
                                   DeleteUserPermissionsBoundaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserPermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
