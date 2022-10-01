// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_P_H
#define QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listusersbypermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class ListUsersByPermissionGroupRequest;

class ListUsersByPermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListUsersByPermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListUsersByPermissionGroupRequest * const q);
    ListUsersByPermissionGroupRequestPrivate(const ListUsersByPermissionGroupRequestPrivate &other,
                                   ListUsersByPermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsersByPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
