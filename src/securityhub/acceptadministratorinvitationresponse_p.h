// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_P_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class AcceptAdministratorInvitationResponse;

class AcceptAdministratorInvitationResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit AcceptAdministratorInvitationResponsePrivate(AcceptAdministratorInvitationResponse * const q);

    void parseAcceptAdministratorInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptAdministratorInvitationResponse)
    Q_DISABLE_COPY(AcceptAdministratorInvitationResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
