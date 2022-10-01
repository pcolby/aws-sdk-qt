// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSBYUSERREQUEST_P_H
#define QTAWS_LISTPERMISSIONGROUPSBYUSERREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listpermissiongroupsbyuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsByUserRequest;

class ListPermissionGroupsByUserRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListPermissionGroupsByUserRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListPermissionGroupsByUserRequest * const q);
    ListPermissionGroupsByUserRequestPrivate(const ListPermissionGroupsByUserRequestPrivate &other,
                                   ListPermissionGroupsByUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionGroupsByUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
