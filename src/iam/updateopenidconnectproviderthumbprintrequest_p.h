// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTREQUEST_P_H
#define QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTREQUEST_P_H

#include "iamrequest_p.h"
#include "updateopenidconnectproviderthumbprintrequest.h"

namespace QtAws {
namespace Iam {

class UpdateOpenIDConnectProviderThumbprintRequest;

class UpdateOpenIDConnectProviderThumbprintRequestPrivate : public IamRequestPrivate {

public:
    UpdateOpenIDConnectProviderThumbprintRequestPrivate(const IamRequest::Action action,
                                   UpdateOpenIDConnectProviderThumbprintRequest * const q);
    UpdateOpenIDConnectProviderThumbprintRequestPrivate(const UpdateOpenIDConnectProviderThumbprintRequestPrivate &other,
                                   UpdateOpenIDConnectProviderThumbprintRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOpenIDConnectProviderThumbprintRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
