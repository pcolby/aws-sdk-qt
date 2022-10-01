// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSECURITYGROUPREQUEST_P_H
#define QTAWS_DELETEDBSECURITYGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbsecuritygrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBSecurityGroupRequest;

class DeleteDBSecurityGroupRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBSecurityGroupRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBSecurityGroupRequest * const q);
    DeleteDBSecurityGroupRequestPrivate(const DeleteDBSecurityGroupRequestPrivate &other,
                                   DeleteDBSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBSecurityGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
