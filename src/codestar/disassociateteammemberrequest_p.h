// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETEAMMEMBERREQUEST_P_H
#define QTAWS_DISASSOCIATETEAMMEMBERREQUEST_P_H

#include "codestarrequest_p.h"
#include "disassociateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class DisassociateTeamMemberRequest;

class DisassociateTeamMemberRequestPrivate : public CodeStarRequestPrivate {

public:
    DisassociateTeamMemberRequestPrivate(const CodeStarRequest::Action action,
                                   DisassociateTeamMemberRequest * const q);
    DisassociateTeamMemberRequestPrivate(const DisassociateTeamMemberRequestPrivate &other,
                                   DisassociateTeamMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
