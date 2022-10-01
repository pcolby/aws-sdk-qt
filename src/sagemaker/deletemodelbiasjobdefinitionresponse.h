// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELBIASJOBDEFINITIONRESPONSE_H
#define QTAWS_DELETEMODELBIASJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelBiasJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelBiasJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelBiasJobDefinitionResponse(const DeleteModelBiasJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelBiasJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelBiasJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelBiasJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
