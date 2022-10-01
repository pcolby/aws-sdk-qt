// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPENIDCONNECTPROVIDERREQUEST_P_H
#define QTAWS_DELETEOPENIDCONNECTPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class DeleteOpenIDConnectProviderRequest;

class DeleteOpenIDConnectProviderRequestPrivate : public IamRequestPrivate {

public:
    DeleteOpenIDConnectProviderRequestPrivate(const IamRequest::Action action,
                                   DeleteOpenIDConnectProviderRequest * const q);
    DeleteOpenIDConnectProviderRequestPrivate(const DeleteOpenIDConnectProviderRequestPrivate &other,
                                   DeleteOpenIDConnectProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOpenIDConnectProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
