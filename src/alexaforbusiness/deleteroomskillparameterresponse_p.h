// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMSKILLPARAMETERRESPONSE_P_H
#define QTAWS_DELETEROOMSKILLPARAMETERRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteRoomSkillParameterResponse;

class DeleteRoomSkillParameterResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteRoomSkillParameterResponsePrivate(DeleteRoomSkillParameterResponse * const q);

    void parseDeleteRoomSkillParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoomSkillParameterResponse)
    Q_DISABLE_COPY(DeleteRoomSkillParameterResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
