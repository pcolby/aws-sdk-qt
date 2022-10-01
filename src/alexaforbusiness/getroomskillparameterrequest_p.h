// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMSKILLPARAMETERREQUEST_P_H
#define QTAWS_GETROOMSKILLPARAMETERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomSkillParameterRequest;

class GetRoomSkillParameterRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetRoomSkillParameterRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetRoomSkillParameterRequest * const q);
    GetRoomSkillParameterRequestPrivate(const GetRoomSkillParameterRequestPrivate &other,
                                   GetRoomSkillParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoomSkillParameterRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
