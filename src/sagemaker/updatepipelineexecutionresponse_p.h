// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_UPDATEPIPELINEEXECUTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdatePipelineExecutionResponse;

class UpdatePipelineExecutionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdatePipelineExecutionResponsePrivate(UpdatePipelineExecutionResponse * const q);

    void parseUpdatePipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineExecutionResponse)
    Q_DISABLE_COPY(UpdatePipelineExecutionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
