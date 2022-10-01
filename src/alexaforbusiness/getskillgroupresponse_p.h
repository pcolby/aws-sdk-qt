// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSKILLGROUPRESPONSE_P_H
#define QTAWS_GETSKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetSkillGroupResponse;

class GetSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetSkillGroupResponsePrivate(GetSkillGroupResponse * const q);

    void parseGetSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSkillGroupResponse)
    Q_DISABLE_COPY(GetSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
