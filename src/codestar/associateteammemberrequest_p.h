// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETEAMMEMBERREQUEST_P_H
#define QTAWS_ASSOCIATETEAMMEMBERREQUEST_P_H

#include "codestarrequest_p.h"
#include "associateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class AssociateTeamMemberRequest;

class AssociateTeamMemberRequestPrivate : public CodeStarRequestPrivate {

public:
    AssociateTeamMemberRequestPrivate(const CodeStarRequest::Action action,
                                   AssociateTeamMemberRequest * const q);
    AssociateTeamMemberRequestPrivate(const AssociateTeamMemberRequestPrivate &other,
                                   AssociateTeamMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
