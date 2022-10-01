// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERFROMGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEMEMBERFROMGROUPRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DisassociateMemberFromGroupResponse;

class DisassociateMemberFromGroupResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DisassociateMemberFromGroupResponsePrivate(DisassociateMemberFromGroupResponse * const q);

    void parseDisassociateMemberFromGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberFromGroupResponse)
    Q_DISABLE_COPY(DisassociateMemberFromGroupResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
