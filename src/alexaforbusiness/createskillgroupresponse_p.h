// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESKILLGROUPRESPONSE_P_H
#define QTAWS_CREATESKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateSkillGroupResponse;

class CreateSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateSkillGroupResponsePrivate(CreateSkillGroupResponse * const q);

    void parseCreateSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSkillGroupResponse)
    Q_DISABLE_COPY(CreateSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
