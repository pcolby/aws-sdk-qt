// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONGROUPREQUEST_P_H
#define QTAWS_GETPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getpermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class GetPermissionGroupRequest;

class GetPermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetPermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetPermissionGroupRequest * const q);
    GetPermissionGroupRequestPrivate(const GetPermissionGroupRequestPrivate &other,
                                   GetPermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
