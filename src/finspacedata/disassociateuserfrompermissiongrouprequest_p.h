// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "disassociateuserfrompermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class DisassociateUserFromPermissionGroupRequest;

class DisassociateUserFromPermissionGroupRequestPrivate : public FinspaceDataRequestPrivate {

public:
    DisassociateUserFromPermissionGroupRequestPrivate(const FinspaceDataRequest::Action action,
                                   DisassociateUserFromPermissionGroupRequest * const q);
    DisassociateUserFromPermissionGroupRequestPrivate(const DisassociateUserFromPermissionGroupRequestPrivate &other,
                                   DisassociateUserFromPermissionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateUserFromPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
