// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERSREQUEST_P_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERSREQUEST_P_H

#include "iamrequest_p.h"
#include "listopenidconnectprovidersrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProvidersRequest;

class ListOpenIDConnectProvidersRequestPrivate : public IamRequestPrivate {

public:
    ListOpenIDConnectProvidersRequestPrivate(const IamRequest::Action action,
                                   ListOpenIDConnectProvidersRequest * const q);
    ListOpenIDConnectProvidersRequestPrivate(const ListOpenIDConnectProvidersRequestPrivate &other,
                                   ListOpenIDConnectProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpenIDConnectProvidersRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
