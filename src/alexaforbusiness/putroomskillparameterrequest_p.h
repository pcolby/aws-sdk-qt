// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROOMSKILLPARAMETERREQUEST_P_H
#define QTAWS_PUTROOMSKILLPARAMETERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "putroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutRoomSkillParameterRequest;

class PutRoomSkillParameterRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    PutRoomSkillParameterRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   PutRoomSkillParameterRequest * const q);
    PutRoomSkillParameterRequestPrivate(const PutRoomSkillParameterRequestPrivate &other,
                                   PutRoomSkillParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRoomSkillParameterRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
