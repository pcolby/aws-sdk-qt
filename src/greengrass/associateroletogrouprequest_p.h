// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROLETOGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEROLETOGROUPREQUEST_P_H

#include "greengrassrequest_p.h"
#include "associateroletogrouprequest.h"

namespace QtAws {
namespace Greengrass {

class AssociateRoleToGroupRequest;

class AssociateRoleToGroupRequestPrivate : public GreengrassRequestPrivate {

public:
    AssociateRoleToGroupRequestPrivate(const GreengrassRequest::Action action,
                                   AssociateRoleToGroupRequest * const q);
    AssociateRoleToGroupRequestPrivate(const AssociateRoleToGroupRequestPrivate &other,
                                   AssociateRoleToGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateRoleToGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
