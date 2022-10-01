// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSRESPONSE_H
#define QTAWS_INVITEMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "invitemembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class InviteMembersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT InviteMembersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    InviteMembersResponse(const InviteMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InviteMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteMembersResponse)
    Q_DISABLE_COPY(InviteMembersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
