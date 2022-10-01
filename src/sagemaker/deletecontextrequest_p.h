// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTEXTREQUEST_P_H
#define QTAWS_DELETECONTEXTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletecontextrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteContextRequest;

class DeleteContextRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteContextRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteContextRequest * const q);
    DeleteContextRequestPrivate(const DeleteContextRequestPrivate &other,
                                   DeleteContextRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
