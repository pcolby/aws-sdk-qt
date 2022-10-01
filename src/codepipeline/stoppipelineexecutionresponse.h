// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_STOPPIPELINEEXECUTIONRESPONSE_H

#include "codepipelineresponse.h"
#include "stoppipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class StopPipelineExecutionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT StopPipelineExecutionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    StopPipelineExecutionResponse(const StopPipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopPipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPipelineExecutionResponse)
    Q_DISABLE_COPY(StopPipelineExecutionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
