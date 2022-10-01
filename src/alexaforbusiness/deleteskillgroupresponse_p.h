// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLGROUPRESPONSE_P_H
#define QTAWS_DELETESKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillGroupResponse;

class DeleteSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteSkillGroupResponsePrivate(DeleteSkillGroupResponse * const q);

    void parseDeleteSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSkillGroupResponse)
    Q_DISABLE_COPY(DeleteSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
