// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERHIERARCHYGROUPREQUEST_P_H
#define QTAWS_CREATEUSERHIERARCHYGROUPREQUEST_P_H

#include "connectrequest_p.h"
#include "createuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class CreateUserHierarchyGroupRequest;

class CreateUserHierarchyGroupRequestPrivate : public ConnectRequestPrivate {

public:
    CreateUserHierarchyGroupRequestPrivate(const ConnectRequest::Action action,
                                   CreateUserHierarchyGroupRequest * const q);
    CreateUserHierarchyGroupRequestPrivate(const CreateUserHierarchyGroupRequestPrivate &other,
                                   CreateUserHierarchyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserHierarchyGroupRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
