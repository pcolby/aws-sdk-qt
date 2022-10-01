// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEINVITATIONRESPONSE_H
#define QTAWS_REVOKEINVITATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "revokeinvitationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RevokeInvitationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT RevokeInvitationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    RevokeInvitationResponse(const RevokeInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeInvitationResponse)
    Q_DISABLE_COPY(RevokeInvitationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
