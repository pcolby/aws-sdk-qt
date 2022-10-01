// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROLEFROMGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEROLEFROMGROUPREQUEST_P_H

#include "greengrassrequest_p.h"
#include "disassociaterolefromgrouprequest.h"

namespace QtAws {
namespace Greengrass {

class DisassociateRoleFromGroupRequest;

class DisassociateRoleFromGroupRequestPrivate : public GreengrassRequestPrivate {

public:
    DisassociateRoleFromGroupRequestPrivate(const GreengrassRequest::Action action,
                                   DisassociateRoleFromGroupRequest * const q);
    DisassociateRoleFromGroupRequestPrivate(const DisassociateRoleFromGroupRequestPrivate &other,
                                   DisassociateRoleFromGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateRoleFromGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
