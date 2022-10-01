// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_GETOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "getopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class GetOpenIDConnectProviderRequest;

class GetOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    GetOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   GetOpenIDConnectProviderRequest * const q);
    GetOpenIDConnectProviderRequestPrivate(const GetOpenIDConnectProviderRequestPrivate &other,
                                   GetOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
