// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGESTATISTICSRESPONSE_P_H
#define QTAWS_GETUSAGESTATISTICSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetUsageStatisticsResponse;

class GetUsageStatisticsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetUsageStatisticsResponsePrivate(GetUsageStatisticsResponse * const q);

    void parseGetUsageStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsageStatisticsResponse)
    Q_DISABLE_COPY(GetUsageStatisticsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
