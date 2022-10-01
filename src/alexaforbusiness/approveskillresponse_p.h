// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVESKILLRESPONSE_P_H
#define QTAWS_APPROVESKILLRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ApproveSkillResponse;

class ApproveSkillResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ApproveSkillResponsePrivate(ApproveSkillResponse * const q);

    void parseApproveSkillResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApproveSkillResponse)
    Q_DISABLE_COPY(ApproveSkillResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
