// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKRUNNERHEARTBEATREQUEST_P_H
#define QTAWS_REPORTTASKRUNNERHEARTBEATREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "reporttaskrunnerheartbeatrequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskRunnerHeartbeatRequest;

class ReportTaskRunnerHeartbeatRequestPrivate : public DataPipelineRequestPrivate {

public:
    ReportTaskRunnerHeartbeatRequestPrivate(const DataPipelineRequest::Action action,
                                   ReportTaskRunnerHeartbeatRequest * const q);
    ReportTaskRunnerHeartbeatRequestPrivate(const ReportTaskRunnerHeartbeatRequestPrivate &other,
                                   ReportTaskRunnerHeartbeatRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReportTaskRunnerHeartbeatRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
