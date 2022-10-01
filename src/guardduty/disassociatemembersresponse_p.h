// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSRESPONSE_P_H
#define QTAWS_DISASSOCIATEMEMBERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateMembersResponse;

class DisassociateMembersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DisassociateMembersResponsePrivate(DisassociateMembersResponse * const q);

    void parseDisassociateMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMembersResponse)
    Q_DISABLE_COPY(DisassociateMembersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
