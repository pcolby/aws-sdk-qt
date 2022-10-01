// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPORTDEFINITIONREQUEST_P_H
#define QTAWS_MODIFYREPORTDEFINITIONREQUEST_P_H

#include "costandusagereportrequest_p.h"
#include "modifyreportdefinitionrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class ModifyReportDefinitionRequest;

class ModifyReportDefinitionRequestPrivate : public CostandUsageReportRequestPrivate {

public:
    ModifyReportDefinitionRequestPrivate(const CostandUsageReportRequest::Action action,
                                   ModifyReportDefinitionRequest * const q);
    ModifyReportDefinitionRequestPrivate(const ModifyReportDefinitionRequestPrivate &other,
                                   ModifyReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReportDefinitionRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
