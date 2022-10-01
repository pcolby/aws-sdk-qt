// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSRESPONSE_P_H
#define QTAWS_INVITEMEMBERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class InviteMembersResponse;

class InviteMembersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit InviteMembersResponsePrivate(InviteMembersResponse * const q);

    void parseInviteMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InviteMembersResponse)
    Q_DISABLE_COPY(InviteMembersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
