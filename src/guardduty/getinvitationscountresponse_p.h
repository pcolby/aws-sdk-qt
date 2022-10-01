// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTRESPONSE_P_H
#define QTAWS_GETINVITATIONSCOUNTRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetInvitationsCountResponse;

class GetInvitationsCountResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetInvitationsCountResponsePrivate(GetInvitationsCountResponse * const q);

    void parseGetInvitationsCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInvitationsCountResponse)
    Q_DISABLE_COPY(GetInvitationsCountResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
