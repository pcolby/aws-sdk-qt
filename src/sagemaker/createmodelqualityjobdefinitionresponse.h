// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELQUALITYJOBDEFINITIONRESPONSE_H
#define QTAWS_CREATEMODELQUALITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createmodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelQualityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelQualityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateModelQualityJobDefinitionResponse(const CreateModelQualityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelQualityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(CreateModelQualityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
