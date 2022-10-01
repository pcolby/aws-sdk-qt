// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTSTATUSRESPONSE_P_H
#define QTAWS_GETFINDINGSREPORTSTATUSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class GetFindingsReportStatusResponse;

class GetFindingsReportStatusResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit GetFindingsReportStatusResponsePrivate(GetFindingsReportStatusResponse * const q);

    void parseGetFindingsReportStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsReportStatusResponse)
    Q_DISABLE_COPY(GetFindingsReportStatusResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
