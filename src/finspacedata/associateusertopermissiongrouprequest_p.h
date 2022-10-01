// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "associateusertopermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class AssociateUserToPermissionGroupRequest;

class AssociateUserToPermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    AssociateUserToPermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   AssociateUserToPermissionGroupRequest * const q);
    AssociateUserToPermissionGroupRequestPrivate(const AssociateUserToPermissionGroupRequestPrivate &other,
                                   AssociateUserToPermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateUserToPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
