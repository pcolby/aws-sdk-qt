// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDINVITATIONRESPONSE_P_H
#define QTAWS_SENDINVITATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendInvitationResponse;

class SendInvitationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SendInvitationResponsePrivate(SendInvitationResponse * const q);

    void parseSendInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendInvitationResponse)
    Q_DISABLE_COPY(SendInvitationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
