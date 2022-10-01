// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUSINESSREPORTSCHEDULERESPONSE_P_H
#define QTAWS_CREATEBUSINESSREPORTSCHEDULERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateBusinessReportScheduleResponse;

class CreateBusinessReportScheduleResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateBusinessReportScheduleResponsePrivate(CreateBusinessReportScheduleResponse * const q);

    void parseCreateBusinessReportScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBusinessReportScheduleResponse)
    Q_DISABLE_COPY(CreateBusinessReportScheduleResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
