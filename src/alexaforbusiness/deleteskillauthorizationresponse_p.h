// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DELETESKILLAUTHORIZATIONRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillAuthorizationResponse;

class DeleteSkillAuthorizationResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteSkillAuthorizationResponsePrivate(DeleteSkillAuthorizationResponse * const q);

    void parseDeleteSkillAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSkillAuthorizationResponse)
    Q_DISABLE_COPY(DeleteSkillAuthorizationResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
