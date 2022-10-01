// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelExplainabilityJobDefinitionResponse;

class DeleteModelExplainabilityJobDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteModelExplainabilityJobDefinitionResponsePrivate(DeleteModelExplainabilityJobDefinitionResponse * const q);

    void parseDeleteModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelExplainabilityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelExplainabilityJobDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
