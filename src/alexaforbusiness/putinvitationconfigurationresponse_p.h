// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVITATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTINVITATIONCONFIGURATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutInvitationConfigurationResponse;

class PutInvitationConfigurationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit PutInvitationConfigurationResponsePrivate(PutInvitationConfigurationResponse * const q);

    void parsePutInvitationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInvitationConfigurationResponse)
    Q_DISABLE_COPY(PutInvitationConfigurationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
