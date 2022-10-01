// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUSINESSREPORTSCHEDULERESPONSE_P_H
#define QTAWS_UPDATEBUSINESSREPORTSCHEDULERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateBusinessReportScheduleResponse;

class UpdateBusinessReportScheduleResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateBusinessReportScheduleResponsePrivate(UpdateBusinessReportScheduleResponse * const q);

    void parseUpdateBusinessReportScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBusinessReportScheduleResponse)
    Q_DISABLE_COPY(UpdateBusinessReportScheduleResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
