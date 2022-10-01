// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESKILLGROUPREQUEST_P_H
#define QTAWS_UPDATESKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updateskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateSkillGroupRequest;

class UpdateSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateSkillGroupRequest * const q);
    UpdateSkillGroupRequestPrivate(const UpdateSkillGroupRequestPrivate &other,
                                   UpdateSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
