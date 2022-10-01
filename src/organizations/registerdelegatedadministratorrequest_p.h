// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDELEGATEDADMINISTRATORREQUEST_P_H
#define QTAWS_REGISTERDELEGATEDADMINISTRATORREQUEST_P_H

#include "organizationsrequest_p.h"
#include "registerdelegatedadministratorrequest.h"

namespace QtAws {
namespace Organizations {

class RegisterDelegatedAdministratorRequest;

class RegisterDelegatedAdministratorRequestPrivate : public OrganizationsRequestPrivate {

public:
    RegisterDelegatedAdministratorRequestPrivate(const OrganizationsRequest::Action action,
                                   RegisterDelegatedAdministratorRequest * const q);
    RegisterDelegatedAdministratorRequestPrivate(const RegisterDelegatedAdministratorRequestPrivate &other,
                                   RegisterDelegatedAdministratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDelegatedAdministratorRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
