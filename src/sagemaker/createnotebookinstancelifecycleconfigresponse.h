// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H
#define QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "createnotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateNotebookInstanceLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateNotebookInstanceLifecycleConfigResponse(const CreateNotebookInstanceLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNotebookInstanceLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(CreateNotebookInstanceLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
