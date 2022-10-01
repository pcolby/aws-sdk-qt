// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLGROUPWITHROOMREQUEST_P_H
#define QTAWS_ASSOCIATESKILLGROUPWITHROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associateskillgroupwithroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillGroupWithRoomRequest;

class AssociateSkillGroupWithRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateSkillGroupWithRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateSkillGroupWithRoomRequest * const q);
    AssociateSkillGroupWithRoomRequestPrivate(const AssociateSkillGroupWithRoomRequestPrivate &other,
                                   AssociateSkillGroupWithRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSkillGroupWithRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
