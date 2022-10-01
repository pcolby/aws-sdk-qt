// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKPROGRESSREQUEST_P_H
#define QTAWS_REPORTTASKPROGRESSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "reporttaskprogressrequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskProgressRequest;

class ReportTaskProgressRequestPrivate : public DataPipelineRequestPrivate {

public:
    ReportTaskProgressRequestPrivate(const DataPipelineRequest::Action action,
                                   ReportTaskProgressRequest * const q);
    ReportTaskProgressRequestPrivate(const ReportTaskProgressRequestPrivate &other,
                                   ReportTaskProgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReportTaskProgressRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
