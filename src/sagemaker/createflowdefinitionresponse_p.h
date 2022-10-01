// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEFLOWDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateFlowDefinitionResponse;

class CreateFlowDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateFlowDefinitionResponsePrivate(CreateFlowDefinitionResponse * const q);

    void parseCreateFlowDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFlowDefinitionResponse)
    Q_DISABLE_COPY(CreateFlowDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
