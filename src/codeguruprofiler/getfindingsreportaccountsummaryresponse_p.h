// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYRESPONSE_P_H
#define QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetFindingsReportAccountSummaryResponse;

class GetFindingsReportAccountSummaryResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit GetFindingsReportAccountSummaryResponsePrivate(GetFindingsReportAccountSummaryResponse * const q);

    void parseGetFindingsReportAccountSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsReportAccountSummaryResponse)
    Q_DISABLE_COPY(GetFindingsReportAccountSummaryResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
