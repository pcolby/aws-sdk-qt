// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_STARTPIPELINEEXECUTIONRESPONSE_H

#include "codepipelineresponse.h"
#include "startpipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class StartPipelineExecutionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT StartPipelineExecutionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    StartPipelineExecutionResponse(const StartPipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPipelineExecutionResponse)
    Q_DISABLE_COPY(StartPipelineExecutionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
