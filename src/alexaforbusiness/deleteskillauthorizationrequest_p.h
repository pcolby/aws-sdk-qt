// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLAUTHORIZATIONREQUEST_P_H
#define QTAWS_DELETESKILLAUTHORIZATIONREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deleteskillauthorizationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillAuthorizationRequest;

class DeleteSkillAuthorizationRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteSkillAuthorizationRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteSkillAuthorizationRequest * const q);
    DeleteSkillAuthorizationRequestPrivate(const DeleteSkillAuthorizationRequestPrivate &other,
                                   DeleteSkillAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSkillAuthorizationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
