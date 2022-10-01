// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUSINESSREPORTSCHEDULERESPONSE_P_H
#define QTAWS_DELETEBUSINESSREPORTSCHEDULERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteBusinessReportScheduleResponse;

class DeleteBusinessReportScheduleResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteBusinessReportScheduleResponsePrivate(DeleteBusinessReportScheduleResponse * const q);

    void parseDeleteBusinessReportScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBusinessReportScheduleResponse)
    Q_DISABLE_COPY(DeleteBusinessReportScheduleResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
