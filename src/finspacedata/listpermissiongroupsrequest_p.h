// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSREQUEST_P_H
#define QTAWS_LISTPERMISSIONGROUPSREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listpermissiongroupsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsRequest;

class ListPermissionGroupsRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListPermissionGroupsRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListPermissionGroupsRequest * const q);
    ListPermissionGroupsRequestPrivate(const ListPermissionGroupsRequestPrivate &other,
                                   ListPermissionGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionGroupsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
