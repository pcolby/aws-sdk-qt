// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHSKILLGROUPREQUEST_P_H
#define QTAWS_ASSOCIATESKILLWITHSKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associateskillwithskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithSkillGroupRequest;

class AssociateSkillWithSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateSkillWithSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateSkillWithSkillGroupRequest * const q);
    AssociateSkillWithSkillGroupRequestPrivate(const AssociateSkillWithSkillGroupRequestPrivate &other,
                                   AssociateSkillWithSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSkillWithSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
