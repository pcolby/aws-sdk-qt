// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMSKILLGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATESKILLFROMSKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "disassociateskillfromskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromSkillGroupRequest;

class DisassociateSkillFromSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DisassociateSkillFromSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DisassociateSkillFromSkillGroupRequest * const q);
    DisassociateSkillFromSkillGroupRequestPrivate(const DisassociateSkillFromSkillGroupRequestPrivate &other,
                                   DisassociateSkillFromSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillFromSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
