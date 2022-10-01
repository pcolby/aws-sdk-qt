// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_P_H
#define QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillGroupFromRoomResponse;

class DisassociateSkillGroupFromRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DisassociateSkillGroupFromRoomResponsePrivate(DisassociateSkillGroupFromRoomResponse * const q);

    void parseDisassociateSkillGroupFromRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillGroupFromRoomResponse)
    Q_DISABLE_COPY(DisassociateSkillGroupFromRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
