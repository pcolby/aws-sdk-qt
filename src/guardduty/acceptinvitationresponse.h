// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONRESPONSE_H
#define QTAWS_ACCEPTINVITATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "acceptinvitationrequest.h"

namespace QtAws {
namespace GuardDuty {

class AcceptInvitationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT AcceptInvitationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    AcceptInvitationResponse(const AcceptInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInvitationResponse)
    Q_DISABLE_COPY(AcceptInvitationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
