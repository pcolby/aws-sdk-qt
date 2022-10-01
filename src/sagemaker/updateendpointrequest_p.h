// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTREQUEST_P_H
#define QTAWS_UPDATEENDPOINTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateendpointrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointRequest;

class UpdateEndpointRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateEndpointRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateEndpointRequest * const q);
    UpdateEndpointRequestPrivate(const UpdateEndpointRequestPrivate &other,
                                   UpdateEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
