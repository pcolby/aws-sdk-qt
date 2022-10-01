// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENREQUEST_P_H
#define QTAWS_CREATETOKENREQUEST_P_H

#include "ssooidcrequest_p.h"
#include "createtokenrequest.h"

namespace QtAws {
namespace SsoOidc {

class CreateTokenRequest;

class CreateTokenRequestPrivate : public SsoOidcRequestPrivate {

public:
    CreateTokenRequestPrivate(const SsoOidcRequest::Action action,
                                   CreateTokenRequest * const q);
    CreateTokenRequestPrivate(const CreateTokenRequestPrivate &other,
                                   CreateTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTokenRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
