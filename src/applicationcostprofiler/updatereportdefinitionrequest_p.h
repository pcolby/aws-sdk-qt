// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTDEFINITIONREQUEST_P_H
#define QTAWS_UPDATEREPORTDEFINITIONREQUEST_P_H

#include "applicationcostprofilerrequest_p.h"
#include "updatereportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class UpdateReportDefinitionRequest;

class UpdateReportDefinitionRequestPrivate : public ApplicationCostProfilerRequestPrivate {

public:
    UpdateReportDefinitionRequestPrivate(const ApplicationCostProfilerRequest::Action action,
                                   UpdateReportDefinitionRequest * const q);
    UpdateReportDefinitionRequestPrivate(const UpdateReportDefinitionRequestPrivate &other,
                                   UpdateReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
