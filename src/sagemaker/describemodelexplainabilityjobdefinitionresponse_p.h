// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelExplainabilityJobDefinitionResponse;

class DescribeModelExplainabilityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeModelExplainabilityJobDefinitionResponsePrivate(DescribeModelExplainabilityJobDefinitionResponse * const q);

    void parseDescribeModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelExplainabilityJobDefinitionResponse)
    Q_DISABLE_COPY(DescribeModelExplainabilityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
