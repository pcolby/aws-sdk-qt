// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYRESPONSE_H
#define QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "getfindingsreportaccountsummaryrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetFindingsReportAccountSummaryResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT GetFindingsReportAccountSummaryResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    GetFindingsReportAccountSummaryResponse(const GetFindingsReportAccountSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsReportAccountSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsReportAccountSummaryResponse)
    Q_DISABLE_COPY(GetFindingsReportAccountSummaryResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
