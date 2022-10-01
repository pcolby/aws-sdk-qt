// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONRESPONSE_P_H
#define QTAWS_LISTPIPELINEPARAMETERSFOREXECUTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineParametersForExecutionResponse;

class ListPipelineParametersForExecutionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListPipelineParametersForExecutionResponsePrivate(ListPipelineParametersForExecutionResponse * const q);

    void parseListPipelineParametersForExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPipelineParametersForExecutionResponse)
    Q_DISABLE_COPY(ListPipelineParametersForExecutionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
