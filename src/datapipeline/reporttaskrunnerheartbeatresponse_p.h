// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKRUNNERHEARTBEATRESPONSE_P_H
#define QTAWS_REPORTTASKRUNNERHEARTBEATRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskRunnerHeartbeatResponse;

class ReportTaskRunnerHeartbeatResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit ReportTaskRunnerHeartbeatResponsePrivate(ReportTaskRunnerHeartbeatResponse * const q);

    void parseReportTaskRunnerHeartbeatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReportTaskRunnerHeartbeatResponse)
    Q_DISABLE_COPY(ReportTaskRunnerHeartbeatResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
