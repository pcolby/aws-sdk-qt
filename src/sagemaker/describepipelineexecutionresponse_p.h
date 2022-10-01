// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBEPIPELINEEXECUTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineExecutionResponse;

class DescribePipelineExecutionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribePipelineExecutionResponsePrivate(DescribePipelineExecutionResponse * const q);

    void parseDescribePipelineExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePipelineExecutionResponse)
    Q_DISABLE_COPY(DescribePipelineExecutionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
