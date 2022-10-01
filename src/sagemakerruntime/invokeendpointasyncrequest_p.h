// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTASYNCREQUEST_P_H
#define QTAWS_INVOKEENDPOINTASYNCREQUEST_P_H

#include "sagemakerruntimerequest_p.h"
#include "invokeendpointasyncrequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointAsyncRequest;

class InvokeEndpointAsyncRequestPrivate : public SageMakerRuntimeRequestPrivate {

public:
    InvokeEndpointAsyncRequestPrivate(const SageMakerRuntimeRequest::Action action,
                                   InvokeEndpointAsyncRequest * const q);
    InvokeEndpointAsyncRequestPrivate(const InvokeEndpointAsyncRequestPrivate &other,
                                   InvokeEndpointAsyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeEndpointAsyncRequest)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
