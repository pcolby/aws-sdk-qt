// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREPOSITORYREQUEST_P_H
#define QTAWS_CREATECODEREPOSITORYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createcoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCodeRepositoryRequest;

class CreateCodeRepositoryRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateCodeRepositoryRequestPrivate(const SageMakerRequest::Action action,
                                   CreateCodeRepositoryRequest * const q);
    CreateCodeRepositoryRequestPrivate(const CreateCodeRepositoryRequestPrivate &other,
                                   CreateCodeRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
