// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMUSERSRESPONSE_P_H
#define QTAWS_DISASSOCIATESKILLFROMUSERSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromUsersResponse;

class DisassociateSkillFromUsersResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DisassociateSkillFromUsersResponsePrivate(DisassociateSkillFromUsersResponse * const q);

    void parseDisassociateSkillFromUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSkillFromUsersResponse)
    Q_DISABLE_COPY(DisassociateSkillFromUsersResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
