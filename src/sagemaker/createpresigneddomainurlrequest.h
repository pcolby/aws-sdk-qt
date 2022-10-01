// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDDOMAINURLREQUEST_H
#define QTAWS_CREATEPRESIGNEDDOMAINURLREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedDomainUrlRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreatePresignedDomainUrlRequest : public SageMakerRequest {

public:
    CreatePresignedDomainUrlRequest(const CreatePresignedDomainUrlRequest &other);
    CreatePresignedDomainUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresignedDomainUrlRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
