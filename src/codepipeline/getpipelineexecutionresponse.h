// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_GETPIPELINEEXECUTIONRESPONSE_H

#include "codepipelineresponse.h"
#include "getpipelineexecutionrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineExecutionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineExecutionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetPipelineExecutionResponse(const GetPipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineExecutionResponse)
    Q_DISABLE_COPY(GetPipelineExecutionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
