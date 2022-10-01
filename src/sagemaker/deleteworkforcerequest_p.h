// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFORCEREQUEST_P_H
#define QTAWS_DELETEWORKFORCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkforceRequest;

class DeleteWorkforceRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteWorkforceRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteWorkforceRequest * const q);
    DeleteWorkforceRequestPrivate(const DeleteWorkforceRequestPrivate &other,
                                   DeleteWorkforceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
