// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROOMSKILLPARAMETERRESPONSE_P_H
#define QTAWS_PUTROOMSKILLPARAMETERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutRoomSkillParameterResponse;

class PutRoomSkillParameterResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit PutRoomSkillParameterResponsePrivate(PutRoomSkillParameterResponse * const q);

    void parsePutRoomSkillParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRoomSkillParameterResponse)
    Q_DISABLE_COPY(PutRoomSkillParameterResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
