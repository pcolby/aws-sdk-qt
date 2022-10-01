// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLIENTREQUEST_P_H
#define QTAWS_REGISTERCLIENTREQUEST_P_H

#include "ssooidcrequest_p.h"
#include "registerclientrequest.h"

namespace QtAws {
namespace SsoOidc {

class RegisterClientRequest;

class RegisterClientRequestPrivate : public SsoOidcRequestPrivate {

public:
    RegisterClientRequestPrivate(const SsoOidcRequest::Action action,
                                   RegisterClientRequest * const q);
    RegisterClientRequestPrivate(const RegisterClientRequestPrivate &other,
                                   RegisterClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterClientRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
