// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONREQUEST_P_H
#define QTAWS_DELETEACTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteactionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteActionRequest;

class DeleteActionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteActionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteActionRequest * const q);
    DeleteActionRequestPrivate(const DeleteActionRequestPrivate &other,
                                   DeleteActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
