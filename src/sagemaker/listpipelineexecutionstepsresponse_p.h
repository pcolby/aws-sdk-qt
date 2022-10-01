// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSTEPSRESPONSE_P_H
#define QTAWS_LISTPIPELINEEXECUTIONSTEPSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineExecutionStepsResponse;

class ListPipelineExecutionStepsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListPipelineExecutionStepsResponsePrivate(ListPipelineExecutionStepsResponse * const q);

    void parseListPipelineExecutionStepsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPipelineExecutionStepsResponse)
    Q_DISABLE_COPY(ListPipelineExecutionStepsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
