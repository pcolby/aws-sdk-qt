// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSRESPONSE_H
#define QTAWS_DECLINEINVITATIONSRESPONSE_H

#include "guarddutyresponse.h"
#include "declineinvitationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeclineInvitationsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DeclineInvitationsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DeclineInvitationsResponse(const DeclineInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeclineInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeclineInvitationsResponse)
    Q_DISABLE_COPY(DeclineInvitationsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
