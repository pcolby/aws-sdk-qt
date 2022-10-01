// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTDEFINITIONREQUEST_P_H
#define QTAWS_GETREPORTDEFINITIONREQUEST_P_H

#include "applicationcostprofilerrequest_p.h"
#include "getreportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class GetReportDefinitionRequest;

class GetReportDefinitionRequestPrivate : public ApplicationCostProfilerRequestPrivate {

public:
    GetReportDefinitionRequestPrivate(const ApplicationCostProfilerRequest::Action action,
                                   GetReportDefinitionRequest * const q);
    GetReportDefinitionRequestPrivate(const GetReportDefinitionRequestPrivate &other,
                                   GetReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
