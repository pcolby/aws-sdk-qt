// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEAMMEMBERREQUEST_P_H
#define QTAWS_UPDATETEAMMEMBERREQUEST_P_H

#include "codestarrequest_p.h"
#include "updateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class UpdateTeamMemberRequest;

class UpdateTeamMemberRequestPrivate : public CodeStarRequestPrivate {

public:
    UpdateTeamMemberRequestPrivate(const CodeStarRequest::Action action,
                                   UpdateTeamMemberRequest * const q);
    UpdateTeamMemberRequestPrivate(const UpdateTeamMemberRequestPrivate &other,
                                   UpdateTeamMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
