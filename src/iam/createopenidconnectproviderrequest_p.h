// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_CREATEOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "createopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class CreateOpenIDConnectProviderRequest;

class CreateOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    CreateOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   CreateOpenIDConnectProviderRequest * const q);
    CreateOpenIDConnectProviderRequestPrivate(const CreateOpenIDConnectProviderRequestPrivate &other,
                                   CreateOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
