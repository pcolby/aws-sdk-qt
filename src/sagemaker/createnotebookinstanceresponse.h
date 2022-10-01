// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCERESPONSE_H
#define QTAWS_CREATENOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "createnotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateNotebookInstanceResponse(const CreateNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotebookInstanceResponse)
    Q_DISABLE_COPY(CreateNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
