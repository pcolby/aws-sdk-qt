// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMAININGFREETRIALDAYSRESPONSE_P_H
#define QTAWS_GETREMAININGFREETRIALDAYSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetRemainingFreeTrialDaysResponse;

class GetRemainingFreeTrialDaysResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetRemainingFreeTrialDaysResponsePrivate(GetRemainingFreeTrialDaysResponse * const q);

    void parseGetRemainingFreeTrialDaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRemainingFreeTrialDaysResponse)
    Q_DISABLE_COPY(GetRemainingFreeTrialDaysResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
