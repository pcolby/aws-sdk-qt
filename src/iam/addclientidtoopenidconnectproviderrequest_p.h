// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "addclientidtoopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class AddClientIDToOpenIDConnectProviderRequest;

class AddClientIDToOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    AddClientIDToOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   AddClientIDToOpenIDConnectProviderRequest * const q);
    AddClientIDToOpenIDConnectProviderRequestPrivate(const AddClientIDToOpenIDConnectProviderRequestPrivate &other,
                                   AddClientIDToOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddClientIDToOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
