// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSRESPONSE_P_H
#define QTAWS_LISTINVITATIONSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListInvitationsResponse;

class ListInvitationsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListInvitationsResponsePrivate(ListInvitationsResponse * const q);

    void parseListInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInvitationsResponse)
    Q_DISABLE_COPY(ListInvitationsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
