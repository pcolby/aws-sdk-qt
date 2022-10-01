// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTCONFIGREQUEST_P_H
#define QTAWS_CREATEENDPOINTCONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointConfigRequest;

class CreateEndpointConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateEndpointConfigRequestPrivate(const SageMakerRequest::Action action,
                                   CreateEndpointConfigRequest * const q);
    CreateEndpointConfigRequestPrivate(const CreateEndpointConfigRequestPrivate &other,
                                   CreateEndpointConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
