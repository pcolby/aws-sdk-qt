// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERTOGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEMEMBERTOGROUPRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class AssociateMemberToGroupResponse;

class AssociateMemberToGroupResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit AssociateMemberToGroupResponsePrivate(AssociateMemberToGroupResponse * const q);

    void parseAssociateMemberToGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateMemberToGroupResponse)
    Q_DISABLE_COPY(AssociateMemberToGroupResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
