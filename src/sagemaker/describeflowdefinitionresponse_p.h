// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEFLOWDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeFlowDefinitionResponse;

class DescribeFlowDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeFlowDefinitionResponsePrivate(DescribeFlowDefinitionResponse * const q);

    void parseDescribeFlowDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFlowDefinitionResponse)
    Q_DISABLE_COPY(DescribeFlowDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
