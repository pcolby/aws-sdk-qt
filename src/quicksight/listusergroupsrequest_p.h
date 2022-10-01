// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERGROUPSREQUEST_P_H
#define QTAWS_LISTUSERGROUPSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listusergroupsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListUserGroupsRequest;

class ListUserGroupsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListUserGroupsRequestPrivate(const QuickSightRequest::Action action,
                                   ListUserGroupsRequest * const q);
    ListUserGroupsRequestPrivate(const ListUserGroupsRequestPrivate &other,
                                   ListUserGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
