// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSREQUEST_P_H

#include "efsrequest_p.h"
#include "describemounttargetsecuritygroupsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetSecurityGroupsRequest;

class DescribeMountTargetSecurityGroupsRequestPrivate : public EfsRequestPrivate {

public:
    DescribeMountTargetSecurityGroupsRequestPrivate(const EfsRequest::Action action,
                                   DescribeMountTargetSecurityGroupsRequest * const q);
    DescribeMountTargetSecurityGroupsRequestPrivate(const DescribeMountTargetSecurityGroupsRequestPrivate &other,
                                   DescribeMountTargetSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMountTargetSecurityGroupsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
