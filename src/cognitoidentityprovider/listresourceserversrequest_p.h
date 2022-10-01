// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESERVERSREQUEST_P_H
#define QTAWS_LISTRESOURCESERVERSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "listresourceserversrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListResourceServersRequest;

class ListResourceServersRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ListResourceServersRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ListResourceServersRequest * const q);
    ListResourceServersRequestPrivate(const ListResourceServersRequestPrivate &other,
                                   ListResourceServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceServersRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
