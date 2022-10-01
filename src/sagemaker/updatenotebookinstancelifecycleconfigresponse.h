// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H
#define QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "updatenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceLifecycleConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateNotebookInstanceLifecycleConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateNotebookInstanceLifecycleConfigResponse(const UpdateNotebookInstanceLifecycleConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotebookInstanceLifecycleConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(UpdateNotebookInstanceLifecycleConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
