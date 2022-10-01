// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESERVERREQUEST_P_H
#define QTAWS_DELETERESOURCESERVERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteResourceServerRequest;

class DeleteResourceServerRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteResourceServerRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteResourceServerRequest * const q);
    DeleteResourceServerRequestPrivate(const DeleteResourceServerRequestPrivate &other,
                                   DeleteResourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
