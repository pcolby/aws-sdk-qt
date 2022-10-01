// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSKILLAUTHORIZATIONREQUEST_P_H
#define QTAWS_PUTSKILLAUTHORIZATIONREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "putskillauthorizationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutSkillAuthorizationRequest;

class PutSkillAuthorizationRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    PutSkillAuthorizationRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   PutSkillAuthorizationRequest * const q);
    PutSkillAuthorizationRequestPrivate(const PutSkillAuthorizationRequestPrivate &other,
                                   PutSkillAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSkillAuthorizationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
