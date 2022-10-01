// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_P_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class AcceptAdministratorInvitationResponse;

class AcceptAdministratorInvitationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit AcceptAdministratorInvitationResponsePrivate(AcceptAdministratorInvitationResponse * const q);

    void parseAcceptAdministratorInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptAdministratorInvitationResponse)
    Q_DISABLE_COPY(AcceptAdministratorInvitationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
