// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_H
#define QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedNotebookInstanceUrlRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreatePresignedNotebookInstanceUrlRequest : public SageMakerRequest {

public:
    CreatePresignedNotebookInstanceUrlRequest(const CreatePresignedNotebookInstanceUrlRequest &other);
    CreatePresignedNotebookInstanceUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresignedNotebookInstanceUrlRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
