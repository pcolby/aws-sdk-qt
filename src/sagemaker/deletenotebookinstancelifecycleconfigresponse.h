// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H
#define QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "deletenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteNotebookInstanceLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteNotebookInstanceLifecycleConfigResponse(const DeleteNotebookInstanceLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotebookInstanceLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(DeleteNotebookInstanceLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
