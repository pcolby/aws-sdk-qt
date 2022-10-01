// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSKILLAUTHORIZATIONRESPONSE_P_H
#define QTAWS_PUTSKILLAUTHORIZATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutSkillAuthorizationResponse;

class PutSkillAuthorizationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit PutSkillAuthorizationResponsePrivate(PutSkillAuthorizationResponse * const q);

    void parsePutSkillAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSkillAuthorizationResponse)
    Q_DISABLE_COPY(PutSkillAuthorizationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
