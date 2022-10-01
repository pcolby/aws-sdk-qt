// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETINVITATIONCONFIGURATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetInvitationConfigurationResponse;

class GetInvitationConfigurationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetInvitationConfigurationResponsePrivate(GetInvitationConfigurationResponse * const q);

    void parseGetInvitationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInvitationConfigurationResponse)
    Q_DISABLE_COPY(GetInvitationConfigurationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
