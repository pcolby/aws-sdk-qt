// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREPOSITORYREQUEST_H
#define QTAWS_CREATECODEREPOSITORYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCodeRepositoryRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateCodeRepositoryRequest : public SageMakerRequest {

public:
    CreateCodeRepositoryRequest(const CreateCodeRepositoryRequest &other);
    CreateCodeRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
