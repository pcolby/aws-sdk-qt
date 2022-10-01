// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEAMMEMBERSRESPONSE_P_H
#define QTAWS_LISTTEAMMEMBERSRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class ListTeamMembersResponse;

class ListTeamMembersResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit ListTeamMembersResponsePrivate(ListTeamMembersResponse * const q);

    void parseListTeamMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTeamMembersResponse)
    Q_DISABLE_COPY(ListTeamMembersResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
