// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERHIERARCHYGROUPREQUEST_P_H
#define QTAWS_DELETEUSERHIERARCHYGROUPREQUEST_P_H

#include "connectrequest_p.h"
#include "deleteuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class DeleteUserHierarchyGroupRequest;

class DeleteUserHierarchyGroupRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteUserHierarchyGroupRequestPrivate(const ConnectRequest::Action action,
                                   DeleteUserHierarchyGroupRequest * const q);
    DeleteUserHierarchyGroupRequestPrivate(const DeleteUserHierarchyGroupRequestPrivate &other,
                                   DeleteUserHierarchyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserHierarchyGroupRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
