// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWDEFINITIONRESPONSE_H
#define QTAWS_DELETEFLOWDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteflowdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFlowDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteFlowDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteFlowDefinitionResponse(const DeleteFlowDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFlowDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowDefinitionResponse)
    Q_DISABLE_COPY(DeleteFlowDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
