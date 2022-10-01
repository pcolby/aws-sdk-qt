// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTUSERAUTHEVENTSREQUEST_P_H
#define QTAWS_ADMINLISTUSERAUTHEVENTSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminlistuserautheventsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListUserAuthEventsRequest;

class AdminListUserAuthEventsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminListUserAuthEventsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminListUserAuthEventsRequest * const q);
    AdminListUserAuthEventsRequestPrivate(const AdminListUserAuthEventsRequestPrivate &other,
                                   AdminListUserAuthEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminListUserAuthEventsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
