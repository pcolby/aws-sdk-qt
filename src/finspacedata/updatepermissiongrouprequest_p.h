// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONGROUPREQUEST_P_H
#define QTAWS_UPDATEPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "updatepermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdatePermissionGroupRequest;

class UpdatePermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    UpdatePermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   UpdatePermissionGroupRequest * const q);
    UpdatePermissionGroupRequestPrivate(const UpdatePermissionGroupRequestPrivate &other,
                                   UpdatePermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
