// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLGROUPWITHROOMRESPONSE_P_H
#define QTAWS_ASSOCIATESKILLGROUPWITHROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillGroupWithRoomResponse;

class AssociateSkillGroupWithRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateSkillGroupWithRoomResponsePrivate(AssociateSkillGroupWithRoomResponse * const q);

    void parseAssociateSkillGroupWithRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSkillGroupWithRoomResponse)
    Q_DISABLE_COPY(AssociateSkillGroupWithRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
