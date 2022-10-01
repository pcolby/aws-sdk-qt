// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "removeclientidfromopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class RemoveClientIDFromOpenIDConnectProviderRequest;

class RemoveClientIDFromOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    RemoveClientIDFromOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   RemoveClientIDFromOpenIDConnectProviderRequest * const q);
    RemoveClientIDFromOpenIDConnectProviderRequestPrivate(const RemoveClientIDFromOpenIDConnectProviderRequestPrivate &other,
                                   RemoveClientIDFromOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveClientIDFromOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
