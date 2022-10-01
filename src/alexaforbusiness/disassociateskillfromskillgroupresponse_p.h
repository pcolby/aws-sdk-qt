// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMSKILLGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATESKILLFROMSKILLGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromSkillGroupResponse;

class DisassociateSkillFromSkillGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DisassociateSkillFromSkillGroupResponsePrivate(DisassociateSkillFromSkillGroupResponse * const q);

    void parseDisassociateSkillFromSkillGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillFromSkillGroupResponse)
    Q_DISABLE_COPY(DisassociateSkillFromSkillGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
