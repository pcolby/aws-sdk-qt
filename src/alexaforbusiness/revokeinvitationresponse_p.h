// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEINVITATIONRESPONSE_P_H
#define QTAWS_REVOKEINVITATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class RevokeInvitationResponse;

class RevokeInvitationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit RevokeInvitationResponsePrivate(RevokeInvitationResponse * const q);

    void parseRevokeInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeInvitationResponse)
    Q_DISABLE_COPY(RevokeInvitationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
