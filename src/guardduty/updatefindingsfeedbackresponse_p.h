// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFEEDBACKRESPONSE_P_H
#define QTAWS_UPDATEFINDINGSFEEDBACKRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UpdateFindingsFeedbackResponse;

class UpdateFindingsFeedbackResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UpdateFindingsFeedbackResponsePrivate(UpdateFindingsFeedbackResponse * const q);

    void parseUpdateFindingsFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsFeedbackResponse)
    Q_DISABLE_COPY(UpdateFindingsFeedbackResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
