// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTGROUPSFORUSERREQUEST_P_H
#define QTAWS_ADMINLISTGROUPSFORUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminlistgroupsforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListGroupsForUserRequest;

class AdminListGroupsForUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminListGroupsForUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminListGroupsForUserRequest * const q);
    AdminListGroupsForUserRequestPrivate(const AdminListGroupsForUserRequestPrivate &other,
                                   AdminListGroupsForUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminListGroupsForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
