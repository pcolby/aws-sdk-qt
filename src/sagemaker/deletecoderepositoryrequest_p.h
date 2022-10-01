// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODEREPOSITORYREQUEST_P_H
#define QTAWS_DELETECODEREPOSITORYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletecoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteCodeRepositoryRequest;

class DeleteCodeRepositoryRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteCodeRepositoryRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteCodeRepositoryRequest * const q);
    DeleteCodeRepositoryRequestPrivate(const DeleteCodeRepositoryRequestPrivate &other,
                                   DeleteCodeRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
