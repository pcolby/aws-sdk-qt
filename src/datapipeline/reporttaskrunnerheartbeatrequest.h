// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKRUNNERHEARTBEATREQUEST_H
#define QTAWS_REPORTTASKRUNNERHEARTBEATREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskRunnerHeartbeatRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT ReportTaskRunnerHeartbeatRequest : public DataPipelineRequest {

public:
    ReportTaskRunnerHeartbeatRequest(const ReportTaskRunnerHeartbeatRequest &other);
    ReportTaskRunnerHeartbeatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportTaskRunnerHeartbeatRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
