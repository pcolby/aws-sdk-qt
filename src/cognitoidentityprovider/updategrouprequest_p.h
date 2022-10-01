// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPREQUEST_P_H
#define QTAWS_UPDATEGROUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updategrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateGroupRequest;

class UpdateGroupRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateGroupRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateGroupRequest * const q);
    UpdateGroupRequestPrivate(const UpdateGroupRequestPrivate &other,
                                   UpdateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
