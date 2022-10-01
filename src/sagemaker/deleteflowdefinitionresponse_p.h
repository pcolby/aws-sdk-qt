// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEFLOWDEFINITIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteFlowDefinitionResponse;

class DeleteFlowDefinitionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteFlowDefinitionResponsePrivate(DeleteFlowDefinitionResponse * const q);

    void parseDeleteFlowDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFlowDefinitionResponse)
    Q_DISABLE_COPY(DeleteFlowDefinitionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
