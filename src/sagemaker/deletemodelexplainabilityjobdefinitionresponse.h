// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_H
#define QTAWS_DELETEMODELEXPLAINABILITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelexplainabilityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelExplainabilityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelExplainabilityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelExplainabilityJobDefinitionResponse(const DeleteModelExplainabilityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelExplainabilityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelExplainabilityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelExplainabilityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
