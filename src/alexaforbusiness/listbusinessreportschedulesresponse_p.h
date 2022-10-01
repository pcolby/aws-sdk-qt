// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUSINESSREPORTSCHEDULESRESPONSE_P_H
#define QTAWS_LISTBUSINESSREPORTSCHEDULESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListBusinessReportSchedulesResponse;

class ListBusinessReportSchedulesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListBusinessReportSchedulesResponsePrivate(ListBusinessReportSchedulesResponse * const q);

    void parseListBusinessReportSchedulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBusinessReportSchedulesResponse)
    Q_DISABLE_COPY(ListBusinessReportSchedulesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
