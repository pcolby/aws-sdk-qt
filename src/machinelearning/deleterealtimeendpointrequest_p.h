// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMEENDPOINTREQUEST_P_H
#define QTAWS_DELETEREALTIMEENDPOINTREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "deleterealtimeendpointrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteRealtimeEndpointRequest;

class DeleteRealtimeEndpointRequestPrivate : public MachineLearningRequestPrivate {

public:
    DeleteRealtimeEndpointRequestPrivate(const MachineLearningRequest::Action action,
                                   DeleteRealtimeEndpointRequest * const q);
    DeleteRealtimeEndpointRequestPrivate(const DeleteRealtimeEndpointRequestPrivate &other,
                                   DeleteRealtimeEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRealtimeEndpointRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
