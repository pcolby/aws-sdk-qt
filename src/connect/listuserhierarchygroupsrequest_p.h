// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERHIERARCHYGROUPSREQUEST_P_H
#define QTAWS_LISTUSERHIERARCHYGROUPSREQUEST_P_H

#include "connectrequest_p.h"
#include "listuserhierarchygroupsrequest.h"

namespace QtAws {
namespace Connect {

class ListUserHierarchyGroupsRequest;

class ListUserHierarchyGroupsRequestPrivate : public ConnectRequestPrivate {

public:
    ListUserHierarchyGroupsRequestPrivate(const ConnectRequest::Action action,
                                   ListUserHierarchyGroupsRequest * const q);
    ListUserHierarchyGroupsRequestPrivate(const ListUserHierarchyGroupsRequestPrivate &other,
                                   ListUserHierarchyGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserHierarchyGroupsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
