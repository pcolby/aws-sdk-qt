// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_GETPIPELINEEXECUTIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineExecutionResponse;

class GetPipelineExecutionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit GetPipelineExecutionResponsePrivate(GetPipelineExecutionResponse * const q);

    void parseGetPipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPipelineExecutionResponse)
    Q_DISABLE_COPY(GetPipelineExecutionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
