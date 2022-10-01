// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMEENDPOINTREQUEST_P_H
#define QTAWS_CREATEREALTIMEENDPOINTREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createrealtimeendpointrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateRealtimeEndpointRequest;

class CreateRealtimeEndpointRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateRealtimeEndpointRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateRealtimeEndpointRequest * const q);
    CreateRealtimeEndpointRequestPrivate(const CreateRealtimeEndpointRequestPrivate &other,
                                   CreateRealtimeEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRealtimeEndpointRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
