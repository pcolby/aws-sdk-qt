// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETEAMMEMBERRESPONSE_P_H
#define QTAWS_ASSOCIATETEAMMEMBERRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class AssociateTeamMemberResponse;

class AssociateTeamMemberResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit AssociateTeamMemberResponsePrivate(AssociateTeamMemberResponse * const q);

    void parseAssociateTeamMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTeamMemberResponse)
    Q_DISABLE_COPY(AssociateTeamMemberResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
