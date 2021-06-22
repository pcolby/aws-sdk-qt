/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_REGISTERCLIENTREQUEST_P_H
#define QTAWS_REGISTERCLIENTREQUEST_P_H

#include "ssooidcrequest_p.h"
#include "registerclientrequest.h"

namespace QtAws {
namespace SSOOIDC {

class RegisterClientRequest;

class RegisterClientRequestPrivate : public SsooidcRequestPrivate {

public:
    RegisterClientRequestPrivate(const SsooidcRequest::Action action,
                                   RegisterClientRequest * const q);
    RegisterClientRequestPrivate(const RegisterClientRequestPrivate &other,
                                   RegisterClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterClientRequest)

};

} // namespace SSOOIDC
} // namespace QtAws

#endif
