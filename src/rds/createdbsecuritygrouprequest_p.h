// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSECURITYGROUPREQUEST_P_H
#define QTAWS_CREATEDBSECURITYGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbsecuritygrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSecurityGroupRequest;

class CreateDBSecurityGroupRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBSecurityGroupRequestPrivate(const RdsRequest::Action action,
                                   CreateDBSecurityGroupRequest * const q);
    CreateDBSecurityGroupRequestPrivate(const CreateDBSecurityGroupRequestPrivate &other,
                                   CreateDBSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBSecurityGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
