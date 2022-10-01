// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELBIASJOBDEFINITIONRESPONSE_H
#define QTAWS_CREATEMODELBIASJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "createmodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelBiasJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelBiasJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateModelBiasJobDefinitionResponse(const CreateModelBiasJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelBiasJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(CreateModelBiasJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
