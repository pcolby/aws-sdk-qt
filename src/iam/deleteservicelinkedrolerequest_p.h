// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICELINKEDROLEREQUEST_P_H
#define QTAWS_DELETESERVICELINKEDROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteservicelinkedrolerequest.h"

namespace QtAws {
namespace Iam {

class DeleteServiceLinkedRoleRequest;

class DeleteServiceLinkedRoleRequestPrivate : public IamRequestPrivate {

public:
    DeleteServiceLinkedRoleRequestPrivate(const IamRequest::Action action,
                                   DeleteServiceLinkedRoleRequest * const q);
    DeleteServiceLinkedRoleRequestPrivate(const DeleteServiceLinkedRoleRequestPrivate &other,
                                   DeleteServiceLinkedRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceLinkedRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
