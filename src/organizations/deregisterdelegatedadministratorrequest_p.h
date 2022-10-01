// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_P_H
#define QTAWS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_P_H

#include "organizationsrequest_p.h"
#include "deregisterdelegatedadministratorrequest.h"

namespace QtAws {
namespace Organizations {

class DeregisterDelegatedAdministratorRequest;

class DeregisterDelegatedAdministratorRequestPrivate : public OrganizationsRequestPrivate {

public:
    DeregisterDelegatedAdministratorRequestPrivate(const OrganizationsRequest::Action action,
                                   DeregisterDelegatedAdministratorRequest * const q);
    DeregisterDelegatedAdministratorRequestPrivate(const DeregisterDelegatedAdministratorRequestPrivate &other,
                                   DeregisterDelegatedAdministratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterDelegatedAdministratorRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
