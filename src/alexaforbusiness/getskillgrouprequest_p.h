// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSKILLGROUPREQUEST_P_H
#define QTAWS_GETSKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetSkillGroupRequest;

class GetSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetSkillGroupRequest * const q);
    GetSkillGroupRequestPrivate(const GetSkillGroupRequestPrivate &other,
                                   GetSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
