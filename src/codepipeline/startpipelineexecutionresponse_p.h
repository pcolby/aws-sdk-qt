// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_STARTPIPELINEEXECUTIONRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class StartPipelineExecutionResponse;

class StartPipelineExecutionResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit StartPipelineExecutionResponsePrivate(StartPipelineExecutionResponse * const q);

    void parseStartPipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPipelineExecutionResponse)
    Q_DISABLE_COPY(StartPipelineExecutionResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
