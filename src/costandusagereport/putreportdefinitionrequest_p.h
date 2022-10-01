// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONREQUEST_P_H
#define QTAWS_PUTREPORTDEFINITIONREQUEST_P_H

#include "costandusagereportrequest_p.h"
#include "putreportdefinitionrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class PutReportDefinitionRequest;

class PutReportDefinitionRequestPrivate : public CostandUsageReportRequestPrivate {

public:
    PutReportDefinitionRequestPrivate(const CostandUsageReportRequest::Action action,
                                   PutReportDefinitionRequest * const q);
    PutReportDefinitionRequestPrivate(const PutReportDefinitionRequestPrivate &other,
                                   PutReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutReportDefinitionRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
