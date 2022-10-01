// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTREQUEST_P_H
#define QTAWS_INVOKEENDPOINTREQUEST_P_H

#include "sagemakerruntimerequest_p.h"
#include "invokeendpointrequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointRequest;

class InvokeEndpointRequestPrivate : public SageMakerRuntimeRequestPrivate {

public:
    InvokeEndpointRequestPrivate(const SageMakerRuntimeRequest::Action action,
                                   InvokeEndpointRequest * const q);
    InvokeEndpointRequestPrivate(const InvokeEndpointRequestPrivate &other,
                                   InvokeEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeEndpointRequest)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
