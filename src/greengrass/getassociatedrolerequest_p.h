// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDROLEREQUEST_P_H
#define QTAWS_GETASSOCIATEDROLEREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getassociatedrolerequest.h"

namespace QtAws {
namespace Greengrass {

class GetAssociatedRoleRequest;

class GetAssociatedRoleRequestPrivate : public GreengrassRequestPrivate {

public:
    GetAssociatedRoleRequestPrivate(const GreengrassRequest::Action action,
                                   GetAssociatedRoleRequest * const q);
    GetAssociatedRoleRequestPrivate(const GetAssociatedRoleRequestPrivate &other,
                                   GetAssociatedRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssociatedRoleRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
