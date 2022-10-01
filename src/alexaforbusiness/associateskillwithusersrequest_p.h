// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHUSERSREQUEST_P_H
#define QTAWS_ASSOCIATESKILLWITHUSERSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associateskillwithusersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithUsersRequest;

class AssociateSkillWithUsersRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateSkillWithUsersRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateSkillWithUsersRequest * const q);
    AssociateSkillWithUsersRequestPrivate(const AssociateSkillWithUsersRequestPrivate &other,
                                   AssociateSkillWithUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSkillWithUsersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
