// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_STOPPIPELINEEXECUTIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class StopPipelineExecutionResponse;

class StopPipelineExecutionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit StopPipelineExecutionResponsePrivate(StopPipelineExecutionResponse * const q);

    void parseStopPipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopPipelineExecutionResponse)
    Q_DISABLE_COPY(StopPipelineExecutionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
