// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_P_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_P_H

#include "securityhubrequest_p.h"
#include "acceptadministratorinvitationrequest.h"

namespace QtAws {
namespace SecurityHub {

class AcceptAdministratorInvitationRequest;

class AcceptAdministratorInvitationRequestPrivate : public SecurityHubRequestPrivate {

public:
    AcceptAdministratorInvitationRequestPrivate(const SecurityHubRequest::Action action,
                                   AcceptAdministratorInvitationRequest * const q);
    AcceptAdministratorInvitationRequestPrivate(const AcceptAdministratorInvitationRequestPrivate &other,
                                   AcceptAdministratorInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptAdministratorInvitationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
