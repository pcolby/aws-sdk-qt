// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTDEFINITIONSREQUEST_P_H
#define QTAWS_LISTREPORTDEFINITIONSREQUEST_P_H

#include "applicationcostprofilerrequest_p.h"
#include "listreportdefinitionsrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ListReportDefinitionsRequest;

class ListReportDefinitionsRequestPrivate : public ApplicationCostProfilerRequestPrivate {

public:
    ListReportDefinitionsRequestPrivate(const ApplicationCostProfilerRequest::Action action,
                                   ListReportDefinitionsRequest * const q);
    ListReportDefinitionsRequestPrivate(const ListReportDefinitionsRequestPrivate &other,
                                   ListReportDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportDefinitionsRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
