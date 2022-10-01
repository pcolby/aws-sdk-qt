// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWDEFINITIONRESPONSE_H
#define QTAWS_CREATEFLOWDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateFlowDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateFlowDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateFlowDefinitionResponse(const CreateFlowDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFlowDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowDefinitionResponse)
    Q_DISABLE_COPY(CreateFlowDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
