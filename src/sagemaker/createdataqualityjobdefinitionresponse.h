// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAQUALITYJOBDEFINITIONRESPONSE_H
#define QTAWS_CREATEDATAQUALITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createdataqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDataQualityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateDataQualityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateDataQualityJobDefinitionResponse(const CreateDataQualityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataQualityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataQualityJobDefinitionResponse)
    Q_DISABLE_COPY(CreateDataQualityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
