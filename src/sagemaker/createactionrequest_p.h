// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONREQUEST_P_H
#define QTAWS_CREATEACTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createactionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateActionRequest;

class CreateActionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateActionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateActionRequest * const q);
    CreateActionRequestPrivate(const CreateActionRequestPrivate &other,
                                   CreateActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
