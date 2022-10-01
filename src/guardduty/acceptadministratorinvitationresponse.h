// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "acceptadministratorinvitationrequest.h"

namespace QtAws {
namespace GuardDuty {

class AcceptAdministratorInvitationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT AcceptAdministratorInvitationResponse : public GuardDutyResponse {
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

} // namespace GuardDuty
} // namespace QtAws

#endif
