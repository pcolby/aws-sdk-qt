// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMUSERSREQUEST_P_H
#define QTAWS_DISASSOCIATESKILLFROMUSERSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "disassociateskillfromusersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromUsersRequest;

class DisassociateSkillFromUsersRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DisassociateSkillFromUsersRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DisassociateSkillFromUsersRequest * const q);
    DisassociateSkillFromUsersRequestPrivate(const DisassociateSkillFromUsersRequestPrivate &other,
                                   DisassociateSkillFromUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillFromUsersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
