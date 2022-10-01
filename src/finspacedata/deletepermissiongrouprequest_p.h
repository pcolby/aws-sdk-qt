// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONGROUPREQUEST_P_H
#define QTAWS_DELETEPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "deletepermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class DeletePermissionGroupRequest;

class DeletePermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    DeletePermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   DeletePermissionGroupRequest * const q);
    DeletePermissionGroupRequestPrivate(const DeletePermissionGroupRequestPrivate &other,
                                   DeletePermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
