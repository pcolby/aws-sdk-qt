// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESKILLGROUPRESPONSE_P_H
#define QTAWS_UPDATESKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateSkillGroupResponse;

class UpdateSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateSkillGroupResponsePrivate(UpdateSkillGroupResponse * const q);

    void parseUpdateSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSkillGroupResponse)
    Q_DISABLE_COPY(UpdateSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
