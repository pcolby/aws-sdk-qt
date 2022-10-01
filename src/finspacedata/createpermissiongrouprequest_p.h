// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONGROUPREQUEST_P_H
#define QTAWS_CREATEPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "createpermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class CreatePermissionGroupRequest;

class CreatePermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    CreatePermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   CreatePermissionGroupRequest * const q);
    CreatePermissionGroupRequestPrivate(const CreatePermissionGroupRequestPrivate &other,
                                   CreatePermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
