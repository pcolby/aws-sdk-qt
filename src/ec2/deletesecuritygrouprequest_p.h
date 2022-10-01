// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYGROUPREQUEST_P_H
#define QTAWS_DELETESECURITYGROUPREQUEST_P_H

#include "ec2request_p.h"
#include "deletesecuritygrouprequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSecurityGroupRequest;

class DeleteSecurityGroupRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteSecurityGroupRequestPrivate(const Ec2Request::Action action,
                                   DeleteSecurityGroupRequest * const q);
    DeleteSecurityGroupRequestPrivate(const DeleteSecurityGroupRequestPrivate &other,
                                   DeleteSecurityGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
