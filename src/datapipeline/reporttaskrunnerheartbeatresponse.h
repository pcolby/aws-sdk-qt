// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKRUNNERHEARTBEATRESPONSE_H
#define QTAWS_REPORTTASKRUNNERHEARTBEATRESPONSE_H

#include "datapipelineresponse.h"
#include "reporttaskrunnerheartbeatrequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskRunnerHeartbeatResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT ReportTaskRunnerHeartbeatResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    ReportTaskRunnerHeartbeatResponse(const ReportTaskRunnerHeartbeatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReportTaskRunnerHeartbeatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportTaskRunnerHeartbeatResponse)
    Q_DISABLE_COPY(ReportTaskRunnerHeartbeatResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
