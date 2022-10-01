// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invokeendpointrequest.h"
#include "invokeendpointrequest_p.h"
#include "invokeendpointresponse.h"
#include "sagemakerruntimerequest_p.h"

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointRequest
 * \brief The InvokeEndpointRequest class provides an interface for SageMakerRuntime InvokeEndpoint requests.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeEndpointRequest::InvokeEndpointRequest(const InvokeEndpointRequest &other)
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeEndpointRequest object.
 */
InvokeEndpointRequest::InvokeEndpointRequest()
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(SageMakerRuntimeRequest::InvokeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new InvokeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointRequestPrivate
 * \brief The InvokeEndpointRequestPrivate class provides private implementation for InvokeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a InvokeEndpointRequestPrivate object for SageMakerRuntime \a action,
 * with public implementation \a q.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const SageMakerRuntimeRequest::Action action, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeEndpointRequest
 * class' copy constructor.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const InvokeEndpointRequestPrivate &other, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
