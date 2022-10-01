// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDINVITATIONRESPONSE_H
#define QTAWS_SENDINVITATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "sendinvitationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendInvitationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SendInvitationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SendInvitationResponse(const SendInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendInvitationResponse)
    Q_DISABLE_COPY(SendInvitationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
