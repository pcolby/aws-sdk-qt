// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEAMMEMBERRESPONSE_P_H
#define QTAWS_UPDATETEAMMEMBERRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class UpdateTeamMemberResponse;

class UpdateTeamMemberResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit UpdateTeamMemberResponsePrivate(UpdateTeamMemberResponse * const q);

    void parseUpdateTeamMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTeamMemberResponse)
    Q_DISABLE_COPY(UpdateTeamMemberResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
