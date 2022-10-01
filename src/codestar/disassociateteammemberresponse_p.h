// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETEAMMEMBERRESPONSE_P_H
#define QTAWS_DISASSOCIATETEAMMEMBERRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class DisassociateTeamMemberResponse;

class DisassociateTeamMemberResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit DisassociateTeamMemberResponsePrivate(DisassociateTeamMemberResponse * const q);

    void parseDisassociateTeamMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTeamMemberResponse)
    Q_DISABLE_COPY(DisassociateTeamMemberResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
