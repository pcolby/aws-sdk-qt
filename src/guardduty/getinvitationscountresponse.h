// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTRESPONSE_H
#define QTAWS_GETINVITATIONSCOUNTRESPONSE_H

#include "guarddutyresponse.h"
#include "getinvitationscountrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetInvitationsCountResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetInvitationsCountResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetInvitationsCountResponse(const GetInvitationsCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInvitationsCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationsCountResponse)
    Q_DISABLE_COPY(GetInvitationsCountResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
