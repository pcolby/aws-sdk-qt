// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTEXTREQUEST_P_H
#define QTAWS_CREATECONTEXTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createcontextrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateContextRequest;

class CreateContextRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateContextRequestPrivate(const SageMakerRequest::Action action,
                                   CreateContextRequest * const q);
    CreateContextRequestPrivate(const CreateContextRequestPrivate &other,
                                   CreateContextRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
