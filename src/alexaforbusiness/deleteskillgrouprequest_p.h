// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLGROUPREQUEST_P_H
#define QTAWS_DELETESKILLGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deleteskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillGroupRequest;

class DeleteSkillGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteSkillGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteSkillGroupRequest * const q);
    DeleteSkillGroupRequestPrivate(const DeleteSkillGroupRequestPrivate &other,
                                   DeleteSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
