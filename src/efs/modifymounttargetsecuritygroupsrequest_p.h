// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSREQUEST_P_H
#define QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSREQUEST_P_H

#include "efsrequest_p.h"
#include "modifymounttargetsecuritygroupsrequest.h"

namespace QtAws {
namespace Efs {

class ModifyMountTargetSecurityGroupsRequest;

class ModifyMountTargetSecurityGroupsRequestPrivate : public EfsRequestPrivate {

public:
    ModifyMountTargetSecurityGroupsRequestPrivate(const EfsRequest::Action action,
                                   ModifyMountTargetSecurityGroupsRequest * const q);
    ModifyMountTargetSecurityGroupsRequestPrivate(const ModifyMountTargetSecurityGroupsRequestPrivate &other,
                                   ModifyMountTargetSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyMountTargetSecurityGroupsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
