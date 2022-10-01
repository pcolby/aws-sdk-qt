// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYGROUPNAMEREQUEST_P_H
#define QTAWS_UPDATEUSERHIERARCHYGROUPNAMEREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuserhierarchygroupnamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyGroupNameRequest;

class UpdateUserHierarchyGroupNameRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserHierarchyGroupNameRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserHierarchyGroupNameRequest * const q);
    UpdateUserHierarchyGroupNameRequestPrivate(const UpdateUserHierarchyGroupNameRequestPrivate &other,
                                   UpdateUserHierarchyGroupNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyGroupNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
