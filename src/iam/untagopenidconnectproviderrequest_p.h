// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_UNTAGOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "untagopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class UntagOpenIDConnectProviderRequest;

class UntagOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    UntagOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   UntagOpenIDConnectProviderRequest * const q);
    UntagOpenIDConnectProviderRequestPrivate(const UntagOpenIDConnectProviderRequestPrivate &other,
                                   UntagOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
