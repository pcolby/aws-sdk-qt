// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelExplainabilityJobDefinitionResponse;

class CreateModelExplainabilityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelExplainabilityJobDefinitionResponsePrivate(CreateModelExplainabilityJobDefinitionResponse * const q);

    void parseCreateModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelExplainabilityJobDefinitionResponse)
    Q_DISABLE_COPY(CreateModelExplainabilityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
