// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_P_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "acceptadministratorinvitationrequest.h"

namespace QtAws {
namespace GuardDuty {

class AcceptAdministratorInvitationRequest;

class AcceptAdministratorInvitationRequestPrivate : public GuardDutyRequestPrivate {

public:
    AcceptAdministratorInvitationRequestPrivate(const GuardDutyRequest::Action action,
                                   AcceptAdministratorInvitationRequest * const q);
    AcceptAdministratorInvitationRequestPrivate(const AcceptAdministratorInvitationRequestPrivate &other,
                                   AcceptAdministratorInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptAdministratorInvitationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
