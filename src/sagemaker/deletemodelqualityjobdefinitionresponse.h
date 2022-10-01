// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELQUALITYJOBDEFINITIONRESPONSE_H
#define QTAWS_DELETEMODELQUALITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelQualityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelQualityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelQualityJobDefinitionResponse(const DeleteModelQualityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelQualityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteModelQualityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
