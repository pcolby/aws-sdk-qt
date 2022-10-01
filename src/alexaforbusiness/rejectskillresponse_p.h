// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSKILLRESPONSE_P_H
#define QTAWS_REJECTSKILLRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class RejectSkillResponse;

class RejectSkillResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit RejectSkillResponsePrivate(RejectSkillResponse * const q);

    void parseRejectSkillResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectSkillResponse)
    Q_DISABLE_COPY(RejectSkillResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
