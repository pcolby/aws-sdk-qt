// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H
#define QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceLifecycleConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteNotebookInstanceLifecycleConfigRequest : public SageMakerRequest {

public:
    DeleteNotebookInstanceLifecycleConfigRequest(const DeleteNotebookInstanceLifecycleConfigRequest &other);
    DeleteNotebookInstanceLifecycleConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
