// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYREQUEST_H
#define QTAWS_GETFINDINGSREPORTACCOUNTSUMMARYREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetFindingsReportAccountSummaryRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT GetFindingsReportAccountSummaryRequest : public CodeGuruProfilerRequest {

public:
    GetFindingsReportAccountSummaryRequest(const GetFindingsReportAccountSummaryRequest &other);
    GetFindingsReportAccountSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsReportAccountSummaryRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
