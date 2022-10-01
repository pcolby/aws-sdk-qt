// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSRESPONSE_P_H
#define QTAWS_DECLINEINVITATIONSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeclineInvitationsResponse;

class DeclineInvitationsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeclineInvitationsResponsePrivate(DeclineInvitationsResponse * const q);

    void parseDeclineInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeclineInvitationsResponse)
    Q_DISABLE_COPY(DeclineInvitationsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
