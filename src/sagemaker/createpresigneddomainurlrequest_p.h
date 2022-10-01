// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDDOMAINURLREQUEST_P_H
#define QTAWS_CREATEPRESIGNEDDOMAINURLREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createpresigneddomainurlrequest.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedDomainUrlRequest;

class CreatePresignedDomainUrlRequestPrivate : public SageMakerRequestPrivate {

public:
    CreatePresignedDomainUrlRequestPrivate(const SageMakerRequest::Action action,
                                   CreatePresignedDomainUrlRequest * const q);
    CreatePresignedDomainUrlRequestPrivate(const CreatePresignedDomainUrlRequestPrivate &other,
                                   CreatePresignedDomainUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePresignedDomainUrlRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
