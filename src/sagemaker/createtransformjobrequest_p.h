// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSFORMJOBREQUEST_P_H
#define QTAWS_CREATETRANSFORMJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createtransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTransformJobRequest;

class CreateTransformJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateTransformJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateTransformJobRequest * const q);
    CreateTransformJobRequestPrivate(const CreateTransformJobRequestPrivate &other,
                                   CreateTransformJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
