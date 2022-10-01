// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H
#define QTAWS_CREATENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceLifecycleConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateNotebookInstanceLifecycleConfigRequest : public SageMakerRequest {

public:
    CreateNotebookInstanceLifecycleConfigRequest(const CreateNotebookInstanceLifecycleConfigRequest &other);
    CreateNotebookInstanceLifecycleConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
