// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERCONFIGSREQUEST_P_H
#define QTAWS_LISTIDENTITYPROVIDERCONFIGSREQUEST_P_H

#include "eksrequest_p.h"
#include "listidentityproviderconfigsrequest.h"

namespace QtAws {
namespace Eks {

class ListIdentityProviderConfigsRequest;

class ListIdentityProviderConfigsRequestPrivate : public EksRequestPrivate {

public:
    ListIdentityProviderConfigsRequestPrivate(const EksRequest::Action action,
                                   ListIdentityProviderConfigsRequest * const q);
    ListIdentityProviderConfigsRequestPrivate(const ListIdentityProviderConfigsRequestPrivate &other,
                                   ListIdentityProviderConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityProviderConfigsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
