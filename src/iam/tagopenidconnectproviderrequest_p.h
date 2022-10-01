// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_TAGOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "tagopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class TagOpenIDConnectProviderRequest;

class TagOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    TagOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   TagOpenIDConnectProviderRequest * const q);
    TagOpenIDConnectProviderRequestPrivate(const TagOpenIDConnectProviderRequestPrivate &other,
                                   TagOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
