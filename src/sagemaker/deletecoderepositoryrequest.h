// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODEREPOSITORYREQUEST_H
#define QTAWS_DELETECODEREPOSITORYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteCodeRepositoryRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteCodeRepositoryRequest : public SageMakerRequest {

public:
    DeleteCodeRepositoryRequest(const DeleteCodeRepositoryRequest &other);
    DeleteCodeRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
