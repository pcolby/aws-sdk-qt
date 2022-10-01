// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEAMMEMBERSREQUEST_P_H
#define QTAWS_LISTTEAMMEMBERSREQUEST_P_H

#include "codestarrequest_p.h"
#include "listteammembersrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTeamMembersRequest;

class ListTeamMembersRequestPrivate : public CodeStarRequestPrivate {

public:
    ListTeamMembersRequestPrivate(const CodeStarRequest::Action action,
                                   ListTeamMembersRequest * const q);
    ListTeamMembersRequestPrivate(const ListTeamMembersRequestPrivate &other,
                                   ListTeamMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTeamMembersRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
