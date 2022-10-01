// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESERVERREQUEST_P_H
#define QTAWS_UPDATERESOURCESERVERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateResourceServerRequest;

class UpdateResourceServerRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateResourceServerRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateResourceServerRequest * const q);
    UpdateResourceServerRequestPrivate(const UpdateResourceServerRequestPrivate &other,
                                   UpdateResourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
