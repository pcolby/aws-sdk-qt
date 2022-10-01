// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHSKILLGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATESKILLWITHSKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithSkillGroupResponse;

class AssociateSkillWithSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateSkillWithSkillGroupResponsePrivate(AssociateSkillWithSkillGroupResponse * const q);

    void parseAssociateSkillWithSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSkillWithSkillGroupResponse)
    Q_DISABLE_COPY(AssociateSkillWithSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
