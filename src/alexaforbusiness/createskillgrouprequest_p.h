// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESKILLGROUPREQUEST_P_H
#define QTAWS_CREATESKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateSkillGroupRequest;

class CreateSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateSkillGroupRequest * const q);
    CreateSkillGroupRequestPrivate(const CreateSkillGroupRequestPrivate &other,
                                   CreateSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
