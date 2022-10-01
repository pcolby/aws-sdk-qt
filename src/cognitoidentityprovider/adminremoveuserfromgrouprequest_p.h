// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINREMOVEUSERFROMGROUPREQUEST_P_H
#define QTAWS_ADMINREMOVEUSERFROMGROUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminremoveuserfromgrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRemoveUserFromGroupRequest;

class AdminRemoveUserFromGroupRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminRemoveUserFromGroupRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminRemoveUserFromGroupRequest * const q);
    AdminRemoveUserFromGroupRequestPrivate(const AdminRemoveUserFromGroupRequestPrivate &other,
                                   AdminRemoveUserFromGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminRemoveUserFromGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
