// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERTOGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEMEMBERTOGROUPREQUEST_P_H

#include "workmailrequest_p.h"
#include "associatemembertogrouprequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateMemberToGroupRequest;

class AssociateMemberToGroupRequestPrivate : public WorkMailRequestPrivate {

public:
    AssociateMemberToGroupRequestPrivate(const WorkMailRequest::Action action,
                                   AssociateMemberToGroupRequest * const q);
    AssociateMemberToGroupRequestPrivate(const AssociateMemberToGroupRequestPrivate &other,
                                   AssociateMemberToGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateMemberToGroupRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
