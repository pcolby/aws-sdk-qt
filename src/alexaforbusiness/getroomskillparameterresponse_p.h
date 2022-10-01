// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMSKILLPARAMETERRESPONSE_P_H
#define QTAWS_GETROOMSKILLPARAMETERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomSkillParameterResponse;

class GetRoomSkillParameterResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetRoomSkillParameterResponsePrivate(GetRoomSkillParameterResponse * const q);

    void parseGetRoomSkillParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRoomSkillParameterResponse)
    Q_DISABLE_COPY(GetRoomSkillParameterResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
