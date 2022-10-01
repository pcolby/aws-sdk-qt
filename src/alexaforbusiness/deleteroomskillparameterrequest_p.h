// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMSKILLPARAMETERREQUEST_P_H
#define QTAWS_DELETEROOMSKILLPARAMETERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deleteroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteRoomSkillParameterRequest;

class DeleteRoomSkillParameterRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteRoomSkillParameterRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteRoomSkillParameterRequest * const q);
    DeleteRoomSkillParameterRequestPrivate(const DeleteRoomSkillParameterRequestPrivate &other,
                                   DeleteRoomSkillParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoomSkillParameterRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
