// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODEREPOSITORYREQUEST_P_H
#define QTAWS_UPDATECODEREPOSITORYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatecoderepositoryrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateCodeRepositoryRequest;

class UpdateCodeRepositoryRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateCodeRepositoryRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateCodeRepositoryRequest * const q);
    UpdateCodeRepositoryRequestPrivate(const UpdateCodeRepositoryRequestPrivate &other,
                                   UpdateCodeRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
