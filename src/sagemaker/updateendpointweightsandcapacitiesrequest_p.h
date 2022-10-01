// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESREQUEST_P_H
#define QTAWS_UPDATEENDPOINTWEIGHTSANDCAPACITIESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateendpointweightsandcapacitiesrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateEndpointWeightsAndCapacitiesRequest;

class UpdateEndpointWeightsAndCapacitiesRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateEndpointWeightsAndCapacitiesRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateEndpointWeightsAndCapacitiesRequest * const q);
    UpdateEndpointWeightsAndCapacitiesRequestPrivate(const UpdateEndpointWeightsAndCapacitiesRequestPrivate &other,
                                   UpdateEndpointWeightsAndCapacitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointWeightsAndCapacitiesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
