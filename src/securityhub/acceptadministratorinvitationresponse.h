// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_H

#include "securityhubresponse.h"
#include "acceptadministratorinvitationrequest.h"

namespace QtAws {
namespace SecurityHub {

class AcceptAdministratorInvitationResponsePrivate;

class QTAWSSECURITYHUB_EXPORT AcceptAdministratorInvitationResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    AcceptAdministratorInvitationResponse(const AcceptAdministratorInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptAdministratorInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptAdministratorInvitationResponse)
    Q_DISABLE_COPY(AcceptAdministratorInvitationResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
