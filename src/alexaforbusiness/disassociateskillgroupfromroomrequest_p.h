// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLGROUPFROMROOMREQUEST_P_H
#define QTAWS_DISASSOCIATESKILLGROUPFROMROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "disassociateskillgroupfromroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillGroupFromRoomRequest;

class DisassociateSkillGroupFromRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DisassociateSkillGroupFromRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DisassociateSkillGroupFromRoomRequest * const q);
    DisassociateSkillGroupFromRoomRequestPrivate(const DisassociateSkillGroupFromRoomRequestPrivate &other,
                                   DisassociateSkillGroupFromRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillGroupFromRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
