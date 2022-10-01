// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAQUALITYJOBDEFINITIONRESPONSE_H
#define QTAWS_DELETEDATAQUALITYJOBDEFINITIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deletedataqualityjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDataQualityJobDefinitionResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteDataQualityJobDefinitionResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteDataQualityJobDefinitionResponse(const DeleteDataQualityJobDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataQualityJobDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataQualityJobDefinitionResponse)
    Q_DISABLE_COPY(DeleteDataQualityJobDefinitionResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
