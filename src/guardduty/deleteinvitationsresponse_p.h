// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVITATIONSRESPONSE_P_H
#define QTAWS_DELETEINVITATIONSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeleteInvitationsResponse;

class DeleteInvitationsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeleteInvitationsResponsePrivate(DeleteInvitationsResponse * const q);

    void parseDeleteInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInvitationsResponse)
    Q_DISABLE_COPY(DeleteInvitationsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
