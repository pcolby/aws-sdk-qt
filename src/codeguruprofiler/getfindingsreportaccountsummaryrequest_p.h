// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYREQUEST_P_H
#define QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "getfindingsreportaccountsummaryrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetFindingsReportAccountSummaryRequest;

class GetFindingsReportAccountSummaryRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    GetFindingsReportAccountSummaryRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   GetFindingsReportAccountSummaryRequest * const q);
    GetFindingsReportAccountSummaryRequestPrivate(const GetFindingsReportAccountSummaryRequestPrivate &other,
                                   GetFindingsReportAccountSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsReportAccountSummaryRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
