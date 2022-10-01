// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSSTATISTICSRESPONSE_P_H
#define QTAWS_GETFINDINGSSTATISTICSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsStatisticsResponse;

class GetFindingsStatisticsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetFindingsStatisticsResponsePrivate(GetFindingsStatisticsResponse * const q);

    void parseGetFindingsStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsStatisticsResponse)
    Q_DISABLE_COPY(GetFindingsStatisticsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
