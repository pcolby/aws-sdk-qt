// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFORCEREQUEST_P_H
#define QTAWS_CREATEWORKFORCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkforceRequest;

class CreateWorkforceRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateWorkforceRequestPrivate(const SageMakerRequest::Action action,
                                   CreateWorkforceRequest * const q);
    CreateWorkforceRequestPrivate(const CreateWorkforceRequestPrivate &other,
                                   CreateWorkforceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
